
void FUN_006398f0(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  lVar1 = *param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(ulong *)(lVar1 + -0x18) - param_3;
  if (param_4 < uVar3) {
    uVar3 = param_4;
  }
  if (param_3 <= *(ulong *)(lVar1 + -0x18)) {
    uVar2 = FUN_00639800(lVar1 + param_3,uVar3 + param_3 + lVar1,&local_11);
    *param_1 = uVar2;
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::basic_string"
              );
}

