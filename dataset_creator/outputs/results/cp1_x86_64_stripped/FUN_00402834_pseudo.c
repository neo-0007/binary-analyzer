
/* WARNING: Removing unreachable block (ram,0x00402884) */
/* WARNING: Removing unreachable block (ram,0x00402872) */
/* WARNING: Removing unreachable block (ram,0x00402895) */

void FUN_00402834(void)

{
  long unaff_RBX;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
                    /* try { // try from 0040285f to 004028a2 has its CatchHandler @ 004028c4 */
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

