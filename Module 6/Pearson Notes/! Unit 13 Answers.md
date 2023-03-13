## Quiz 13-2
### Question 1
holy fucking shit i hate this
```c++
class Player
{
    private:
        string name;
        int score;
    public:
        void setName(string ab)
            {name = ab;}
        void setScore(int cd) 
            {score = cd;}
        string getName() const
            {return name;}
        int getScore() const
            {return score;}
};
```
#### [Next Section (13.3)](13.3%20-%20Defining%20an%20Instance%20of%20a%20Class.md)

## Quiz 13-3
### Question 1
why is this question the EASIEST out of all these fucking quizzes
```c++
Calculator calc;
```
#### [Next Section(13.4)](13.4%20-%20Why%20Have%20Private%20Members.md)


## Quiz 13-5
### Question 1
```c++
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    private:
        string name;
        int score;
    public:    
        string getName();
        int getScore();
        void setName(string ab);
        void setScore(int cd);
};

#endif
```

### Question 2
i'm actually surprised i got this first try LMAO
```c++
string Player::getName()
{
    return name;
}

int Player::getScore()
{
    return score;
}

void Player::setName(string ab)
{
    cin >> ab;
    name = ab;
}

void Player::setScore(int cd)
{
    cin >> cd;
    score = cd;
}


```

### Question 3
i accidentally put `winnter` instead of `winner` lol
```c++
class ContestResult
{
    private:
        string winner;
        string secondPlace;
        string thirdPlace;
    public:
        void setWinner(string ab);
        void setSecondPlace(string cd);
        void setThirdPlace(string ef);
        string getWinner();
        string getSecondPlace();
        string getThirdPlace();
};
```

### Question 4
dam
```c++
// sets winners/second place/third place
void ContestResult::setWinner(string ab)
{
    cin >> ab;
    winner = ab;
}

void ContestResult::setSecondPlace(string cd)
{
    cin >> cd;
    secondPlace = cd; 
}

void ContestResult::setThirdPlace(string ef)
{
    cin >> ef;
    thirdPlace = ef;
}

// not void
string ContestResult::getWinner()
{
    return winner;
}

string ContestResult::getSecondPlace()
{
    return secondPlace;
}

string ContestResult::getThirdPlace()
{
    return thirdPlace;
}
```

#### [Next Section (13.6)](13.6%20-%20Inline%20Member%20Functions.md)
## Quiz 13-7

## Quiz 13-8

## Quiz 13-9

## Quiz 13-10

## Quiz 13-12

# Programming Project