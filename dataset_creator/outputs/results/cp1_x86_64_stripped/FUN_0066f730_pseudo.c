
void FUN_0066f730(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_2;
  if ((param_2 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006240b0();
}

