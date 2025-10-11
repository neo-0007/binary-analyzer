
void FUN_00402eac(void)

{
  long unaff_RBX;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 00402ebd to 00402ecc has its CatchHandler @ 00402ecd */
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

