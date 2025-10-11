
void FUN_0070c8e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar6 = uVar1 & 0xfffffffffffffff8;
  if (uVar6 != *(ulong *)(param_1 + uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bdd0("corrupted size vs. prev_size");
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  if ((param_1 == *(long *)(lVar5 + 0x18)) && (param_1 == *(long *)(lVar3 + 0x10))) {
    *(long *)(lVar5 + 0x18) = lVar3;
    *(long *)(lVar3 + 0x10) = lVar5;
    if ((0x3ff < uVar1) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
      if ((param_1 != *(long *)(lVar3 + 0x28)) ||
         (lVar4 = *(long *)(param_1 + 0x28), param_1 != *(long *)(lVar4 + 0x20))) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("corrupted double-linked list (not small)");
      }
      if (*(long *)(lVar5 + 0x20) == 0) {
        if (param_1 == lVar3) {
          *(long *)(lVar2 + 0x20) = lVar5;
          *(long *)(lVar2 + 0x28) = lVar5;
        }
        else {
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          *(long *)(*(long *)(param_1 + 0x20) + 0x28) = lVar5;
          *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar5;
        }
      }
      else {
        *(long *)(lVar3 + 0x28) = lVar4;
        *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar3;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0070bdd0("corrupted double-linked list");
}

