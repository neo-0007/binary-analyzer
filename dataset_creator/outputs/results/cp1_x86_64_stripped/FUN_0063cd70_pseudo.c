
void FUN_0063cd70(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  lVar1 = *param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(ulong *)(lVar1 + -0x18);
  uVar3 = uVar2 - param_3;
  if (param_4 < uVar2 - param_3) {
    uVar3 = param_4;
  }
  if (param_3 <= uVar2) {
    uVar4 = FUN_0063cce0(lVar1 + param_3 * 4,lVar1 + (uVar3 + param_3) * 4,&local_11);
    *param_1 = uVar4;
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::basic_string"
               ,param_3,uVar2);
}

