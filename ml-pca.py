from sklearn.datasets import load_breast_cancer
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

breast_cancer = load_breast_cancer()

print(breast_cancer.feature_names)
print(len(breast_cancer.feature_names))

