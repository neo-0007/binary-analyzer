
void FUN_0051df20(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  ulong local_198;
  undefined1 local_188 [64];
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)param_1;
  if ((param_1 & 0x80000000) == 0) {
    local_198 = param_1 >> 0x17 & 0xff;
    puVar2 = (undefined1 *)FUN_0051dd60();
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = local_188;
      FUN_004aeb30(puVar2,0x40,"lib(%lu)",local_198);
    }
    uVar6 = uVar5 & 0x7fffff;
    puVar3 = (undefined1 *)FUN_0051de20(param_1);
    if (puVar3 != (undefined1 *)0x0) goto LAB_0051df93;
  }
  else {
    puVar2 = (undefined1 *)FUN_0051dd60();
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = local_188;
      FUN_004aeb30(puVar2,0x40,"lib(%lu)",2);
    }
    puVar3 = local_148;
    uVar6 = uVar5 & 0x7fffffff;
    iVar1 = FUN_0041c9a0(uVar5 & 0x7fffffff,puVar3,0x100);
    local_198 = 2;
    if (iVar1 != 0) goto LAB_0051df93;
  }
  puVar3 = local_148;
  FUN_004aeb30(puVar3,0x100,"reason(%lu)",uVar6);
LAB_0051df93:
  FUN_004aeb30(param_3,param_4,"error:%08lX:%s:%s:%s",param_1,puVar2,param_2,puVar3);
  lVar4 = thunk_FUN_007129d0(param_3);
  if (lVar4 == param_4 + -1) {
    FUN_004aeb30(param_3,param_4,"err:%lx:%lx:%lx:%lx",param_1,local_198,0,uVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

