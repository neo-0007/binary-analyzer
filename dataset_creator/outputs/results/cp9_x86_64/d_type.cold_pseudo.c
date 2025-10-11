
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void d_type_cold(void)

{
  code *pcVar1;
  
  _SUB_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

