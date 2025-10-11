
/* WARNING: Removing unreachable block (ram,0x00402932) */
/* WARNING: Removing unreachable block (ram,0x00402920) */
/* WARNING: Removing unreachable block (ram,0x00402943) */

void FUN_004028e2(void)

{
  long unaff_RBX;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 0040290d to 00402950 has its CatchHandler @ 00402972 */
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

