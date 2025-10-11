
/* WARNING: Removing unreachable block (ram,0x00402ac4) */
/* WARNING: Removing unreachable block (ram,0x00402ab5) */
/* WARNING: Removing unreachable block (ram,0x00402ad3) */

void FUN_00402af3(void)

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

