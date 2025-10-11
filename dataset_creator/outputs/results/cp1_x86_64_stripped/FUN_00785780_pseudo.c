
void FUN_00785780(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar6 = *(uint *)(param_1 + 0x2c8);
  uVar4 = *(uint *)((&PTR_PTR_0093eb70)[lVar1 * 0x14] + 8);
  uVar3 = (ulong)uVar4;
  if (uVar6 == 0) {
    uVar6 = *(uint *)(&DAT_0093eb7c + lVar1 * 0xa0);
  }
  else {
    uVar5 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2c0) + uVar5 * 8);
      if ((*(byte *)(lVar2 + 0x31c) & 0x10) == 0) {
        *(byte *)(lVar2 + 0x31c) = *(byte *)(lVar2 + 0x31c) | 0x10;
        if ((uint)(&DAT_0093eb78)[lVar1 * 0x28] <= (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("new_nlist < ns->_ns_global_scope_alloc","dl-open.c",0xbc,
                       "add_to_global_update");
        }
        *(long *)(*(long *)(&PTR_PTR_0093eb70)[lVar1 * 0x14] + uVar3 * 8) = lVar2;
        if ((DAT_0094b0e4._1_1_ & 2) != 0) {
          FUN_00787060("\nadd %s [%lu] to global scope\n",*(undefined8 *)(lVar2 + 8),
                       *(undefined8 *)(lVar2 + 0x30));
        }
        uVar6 = *(uint *)(param_1 + 0x2c8);
        uVar3 = (ulong)((uint)uVar3 + 1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < uVar6);
    uVar6 = *(uint *)(&DAT_0093eb7c + lVar1 * 0xa0);
    uVar4 = *(uint *)((&PTR_PTR_0093eb70)[lVar1 * 0x14] + 8);
    if (uVar6 < (int)uVar3 - uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("added <= ns->_ns_global_scope_pending_adds","dl-open.c",0xca,
                   "add_to_global_update");
    }
  }
  *(uint *)(&DAT_0093eb7c + lVar1 * 0xa0) = (uVar4 + uVar6) - (int)uVar3;
  *(int *)((&PTR_PTR_0093eb70)[lVar1 * 0x14] + 8) = (int)uVar3;
  return;
}

