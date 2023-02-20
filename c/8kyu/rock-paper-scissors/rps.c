enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
  // Return draw if same tool
	if (p1 == p2)
    return DRAW;
  
  // Rock case
  if (p1 == ROCK)
    return (p2 == SCISSORS) ? P1_WON : P2_WON;
  
  // Paper case
  else if (p1 == PAPER)
    return (p2 == ROCK) ? P1_WON : P2_WON;
  
 // Scissors case
  else
    return (p2 == PAPER) ? P1_WON : P2_WON;
}