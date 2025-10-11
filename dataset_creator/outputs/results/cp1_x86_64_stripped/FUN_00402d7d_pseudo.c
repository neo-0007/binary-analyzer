
/* WARNING: Removing unreachable block (ram,0x00402d4e) */
/* WARNING: Removing unreachable block (ram,0x00402d3f) */
/* WARNING: Removing unreachable block (ram,0x00402d5d) */

void FUN_00402d7d(void)

{
  long unaff_RBX;
  
  FUN_006c2e40();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
  }
  FUN_006e1eb0();
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

