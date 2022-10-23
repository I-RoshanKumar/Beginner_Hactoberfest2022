import pygame as pg
import sys,time,random

pg.init()
SCREEN_WIDTH=600
SCREEN_HEIGHT=600
win=pg.display.set_mode((SCREEN_WIDTH,SCREEN_HEIGHT))
paddle=pg.Rect(250,575,100,13)
clock=pg.time.Clock()

font = pg.font.Font('arial.ttf', 30)
scoreText = font.render('Score: 0', True, (255,255,204), (0,0,0))
scoreTextRect = scoreText.get_rect()
scoreTextRect.x=10
scoreTextRect.y=10

font2 = pg.font.Font('arial.ttf', 54)
gameOverText = font2.render('Game Over', True, (255,0,0), (0,0,0)
gameOverTextRect = gameOverText.get_rect()
gameOverTextRect.center=(SCREEN_WIDTH//2,SCREEN_HEIGHT//2)
GAME_RUNNING=True
BOX_SPEED=10
TARGET_FPS=50
MAX_BALL_SPEED=10
MIN_BALL_SPEED=5
BALL_X_SPEED=0
BALL_Y_SPEED=0
GAME_STARTED=False
BALL_X=paddle.x+50
BALL_Y=paddle.y-13
SCORE=0
dt=0
old=time.time()

def updateScore():
    global SCORE,scoreText
    SCORE+=1
    scoreText = font.render(f'Score: {SCORE}', True, (255,255,204


def checkCollision():
    global SCREEN_WIDTH,paddle,BALL_X,BALL_Y,BALL_X_SPEED,BALL_Y_
    if paddle.x<0:
        paddle.x=0
    if paddle.x+100>SCREEN_WIDTH:
        paddle.x=SCREEN_WIDTH-100

    if BALL_X-13<=0 or BALL_X+13>=SCREEN_WIDTH:
        BALL_X_SPEED=-BALL_X_SPEED
    if BALL_Y-13<=0:
        BALL_Y_SPEED=-BALL_Y_SPEED

    #Ball hits the paddle
    if BALL_Y+13>=paddle.y-5 and GAME_STARTED==True and BALL_X>pa
        BALL_Y-=15
        BALL_Y_SPEED=-BALL_Y_SPEED
        updateScore()
    elif BALL_Y+13>paddle.y:
        gameOver()

def gameOver():
    global GAME_RUNNING
    GAME_RUNNING=False
    
while True:
    new=time.time()
    dt=new-old
    old=new
    for event in pg.event.get():
        if event.type==pg.QUIT:
            pg.quit()
            sys.exit()
        if event.type==pg.KEYDOWN:
            if event.key==pg.K_SPACE:
                GAME_STARTED=True
                BALL_Y-=10
                sign=random.randint(0,1)
                BALL_Y_SPEED=-random.randint(MIN_BALL_SPEED,MAX_B
                BALL_X_SPEED=random.randint(MIN_BALL_SPEED,MAX_BA
                if sign==0:
                    BALL_X_SPEED=-BALL_X_SPEED
    
    if GAME_RUNNING==True:
        checkCollision()
        key=pg.key.get_pressed()
        if key[pg.K_LEFT]:
            paddle.x-=BOX_SPEED*dt*TARGET_FPS
            if GAME_STARTED==False:
                BALL_X=paddle.x+50
        elif key[pg.K_RIGHT]:
            paddle.x+=BOX_SPEED*dt*TARGET_FPS
            if GAME_STARTED==False:
                BALL_X=paddle.x+50

        

        win.fill("black")
        pg.draw.rect(win,(153,204,255),paddle)
        if GAME_STARTED==False:
            pg.draw.circle(win,(0,102,204),(BALL_X,BALL_Y),13)
        else:
            BALL_X+=BALL_X_SPEED*dt*TARGET_FPS
            BALL_Y+=BALL_Y_SPEED*dt*TARGET_FPS
            pg.draw.circle(win,(0,102,204),(BALL_X,BALL_Y),13)
    else:
        win.blit(gameOverText,gameOverTextRect)

    win.blit(scoreText,scoreTextRect)
    pg.display.update()
    
    clock.tick(50)
