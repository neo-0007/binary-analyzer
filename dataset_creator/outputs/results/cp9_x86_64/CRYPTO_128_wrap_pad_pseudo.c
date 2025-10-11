
long CRYPTO_128_wrap_pad(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                        size_t param_5,code *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_48;
  uint uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0;
  if (param_5 - 1 < 0x7fffffff) {
    if (param_2 == (undefined4 *)0x0) {
      local_48 = 0xa65959a6;
    }
    else {
      local_48 = *param_2;
    }
    uVar4 = param_5 + 7 & 0xfffffffffffffff8;
    uVar1 = (uint)param_5;
    uStack_44 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar4 == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT44(uStack_44,local_48);
      memset((void *)((long)param_3 + param_5 + 8),0,uVar4 - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar3 = 0x10;
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)((long)param_3 + param_5),0,uVar4 - param_5);
      iVar2 = CRYPTO_128_wrap(param_1,&local_48,param_3,param_3,uVar4,param_6);
      lVar3 = (long)iVar2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

