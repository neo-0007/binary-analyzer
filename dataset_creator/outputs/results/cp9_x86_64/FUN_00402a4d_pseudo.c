
/* WARNING: Removing unreachable block (ram,0x00402a1e) */
/* WARNING: Removing unreachable block (ram,0x00402a0f) */
/* WARNING: Removing unreachable block (ram,0x00402a2d) */

void FUN_00402a4d(void)

{
  long unaff_RBX;
  __locale_t unaff_R14;
  
  __cxa_begin_catch();
  if (*(long **)(unaff_RBX + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_RBX + 0x10) + 8))();
    *(undefined8 *)(unaff_RBX + 0x10) = 0;
  }
  uselocale(unaff_R14);
                    /* WARNING: Subroutine does not return */
  __cxa_rethrow();
}

