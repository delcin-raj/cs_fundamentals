class Color:
    def __init__(self, name, quantity):
        self.name = name
        self.quantity = quantity

class Round:
    def __init__(self, colors):
        self.colors = colors

class Game:
    def __init__(self, id, rounds):
        self.id = id
        self.rounds = rounds

f = open("input/day2.dat", "r")
data = f.read()
games_raw = data.split("\n")

def space0(s):
    # matches 0 or more spaces
    if s == '':
        return ('', '')
    i = 0
    while i < len(s) and s[i] == ' ':
        i += 1

    return (s[:i], s[i:])

def space1(s):
    # matches 1 or more spaces
    if s == '':
        raise Exception("space1: failed to parse empty string")
    if s[0] != ' ':
        raise Exception("space1: No space to match")
    i = 1
    while i < len(s) and s[i] == ' ':
        i += 1

    return (s[:i], s[i:])

def digits(s):
    # matches a continuous characters of digits in the prefix
    if s == '':
        raise Exception("digits: empty string")
    
    if not s[0].isdigit():
        raise Exception("digits: Not a digit")
    i = 1

    while i < len(s) and s[i].isdigit():
        i += 1
    return (int(s[:i]), s[i:])

def game_id(s):
    # Takes a string and returns (id, string) if in proper format
    # Else return None
    if s.startsWith("Game"):
        (_, rest) = space1(s[4:])
        return digits(rest)
    else:
        raise Exception("game_id: does not start with Game")

for game_raw in games_raw:
    # convert this String into a Game object
    pass