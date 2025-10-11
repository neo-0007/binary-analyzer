
/* WARNING: Removing unreachable block (ram,0x00402bac) */
/* WARNING: Removing unreachable block (ram,0x00402b9a) */
/* WARNING: Removing unreachable block (ram,0x00402bbd) */

void FUN_00402b5c(void)

{
  long unaff_RBX;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 00402b87 to 00402bca has its CatchHandler @ 00402bec */
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

