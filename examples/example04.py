"Tyler Durden\nBrad Pitt\nMia Wallace\nUma Thurman\n"

  ["Tyler Durden", "Brad Pitt", "Mia Wallace", "Uma Thurman"]

# re searchable keys
"A\nB\n"

# compact dict
{ 
  2: "My Key is B at offset 2"
  0: "My key is A at offest 0",
}

"Brad Pitt\nMia Wallace\nTyler Durden\nUma Thurman\n"
{ 22: "Dead",
  35: "Alive",
  0: "Alive",
  10: "Alive" }

{ "Tyler Durden": "Dead",
  "Uma Thurman": "Alive",
  "Brad Pitt": "Alive",
  "Mia Wallace": "Alive" }


{ "Tyler Durden": <PersonState object at 0x7fd2622fbd60>,
  "Uma Thurman": <PersonState object at 0x7fd2622fbc40>,
  "Brad Pitt": <PersonState object at 0x7fd26231a160>,
  "Mia Wallace": <PersonState object at 0x7fd26231a100> }


{ "Tyler Durden": PersonState(alive=0),
  "Uma Thurman": PersonState(alive=1),
  "Brad Pitt": PersonState(alive=1),
  "Mia Wallace": PersonState(alive=1) }


Counter({
  "Walking Dead": 19,
  "Alive": 7,
  "Dead": 2,
  "Not Born": 1,
})

