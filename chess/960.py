# chess 960 position generator
from random import choice
def x():
    y = ['♜','♚','♜']
    for z in ['♞','♞','♛']:
        y.insert(choice(range(len(y)+1)),z)
    a = choice(range(len(y)+1))
    y.insert(a,'♝')
    y.insert(choice(range(a+1,len(y)+1,2)),'♝')
    return y
    return ''.join(y).upper()
print(x())
