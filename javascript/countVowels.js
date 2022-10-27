function countVowels(string){
    const vowels=['a','i','o','u','e'];
    const lowerCase=string.toLowerCase();
    let cntVowel=0;
    for(let i=0;i<lowerCase.length;i++){
        if(vowels.includes(lowerCase.charAt(i))){
            cntVowel++;
        }
    }
    return cntVowel;
}

const string="Hactoberfest 2022 coming with new opportunity";
const vowels=countVowels(string);
console.log(vowels);
