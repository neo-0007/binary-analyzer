
void FUN_00403bce(void)

{
  long *unaff_RBX;
  undefined4 unaff_R12D;
  
  FUN_006c2e40();
                    /* try { // try from 00403bd3 to 00403bd7 has its CatchHandler @ 00403bdd */
  FUN_006c2eb0();
  while (unaff_RBX = (long *)*unaff_RBX, unaff_RBX != (long *)0x0) {
    (*(code *)unaff_RBX[1])(unaff_R12D);
  }
  return;
}

