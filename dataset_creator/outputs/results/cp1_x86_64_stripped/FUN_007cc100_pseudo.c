
void FUN_007cc100(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = (long *)(lVar3 + uVar4 * 0x68);
      if (((0 < (int)plVar1[2]) && (*plVar1 != 0)) &&
         (pcVar5 = (code *)(((ulong)plVar1[8] >> 0x11 | plVar1[8] << 0x2f) ^
                           *(ulong *)(in_FS_OFFSET + 0x30)), pcVar5 != (code *)0x0)) {
        FUN_0078e430(pcVar5);
        (*pcVar5)(*(long *)(param_1 + 0x10) + uVar4 * 0x68);
        uVar2 = *(ulong *)(param_1 + 0x18);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (lVar3 != 0) {
    FUN_007104f0(*(undefined8 *)(lVar3 + 0x18));
    FUN_007104f0(*(undefined8 *)
                  (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x18) * 0x68 + -0x48));
    FUN_007104f0(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_007104f0(param_1);
  return;
}

