
/* WARNING: Removing unreachable block (ram,0x00402c5a) */
/* WARNING: Removing unreachable block (ram,0x00402c48) */
/* WARNING: Removing unreachable block (ram,0x00402c6b) */

void FUN_00402c0a(void)

{
  long unaff_RBX;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 00402c35 to 00402c78 has its CatchHandler @ 00402c9a */
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

