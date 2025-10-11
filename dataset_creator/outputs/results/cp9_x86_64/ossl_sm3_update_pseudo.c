
undefined8 ossl_sm3_update(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *__dest;
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (param_3 == 0) {
    return 1;
  }
  iVar7 = (int)param_3;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar7 * 8 + *(uint *)(param_1 + 0x20);
  uVar2 = (ulong)*(uint *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x24) =
       ((*(int *)(param_1 + 0x24) + 1) - (uint)!CARRY4(iVar7 * 8,uVar1)) + (int)(param_3 >> 0x1d);
  if (uVar2 == 0) {
    if (param_3 < 0x40) goto LAB_005802c0;
LAB_00580378:
    ossl_sm3_block_data_order(param_1,param_2,param_3 >> 6);
    param_2 = (undefined8 *)((long)param_2 + (param_3 & 0xffffffffffffffc0));
    param_3 = param_3 - (param_3 & 0xffffffffffffffc0);
  }
  else {
    __dest = (undefined8 *)(param_1 + 0x28 + uVar2);
    if ((param_3 | param_3 + uVar2) < 0x40) {
      memcpy(__dest,param_2,param_3);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar7;
      return 1;
    }
    lVar4 = -uVar2;
    uVar6 = lVar4 + 0x40;
    if (uVar6 < 8) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 != 0) && (*(undefined1 *)__dest = *(undefined1 *)param_2, (uVar6 & 2) != 0)) {
          *(undefined2 *)((long)__dest + lVar4 + 0x3e) =
               *(undefined2 *)((long)param_2 + lVar4 + 0x3e);
        }
      }
      else {
        *(undefined4 *)__dest = *(undefined4 *)param_2;
        *(undefined4 *)((long)__dest + lVar4 + 0x3c) = *(undefined4 *)((long)param_2 + lVar4 + 0x3c)
        ;
      }
    }
    else {
      *__dest = *param_2;
      *(undefined8 *)((long)__dest + lVar4 + 0x38) = *(undefined8 *)((long)param_2 + lVar4 + 0x38);
      lVar4 = (long)__dest - ((ulong)(__dest + 1) & 0xfffffffffffffff8);
      uVar5 = lVar4 + uVar6 & 0xfffffffffffffff8;
      if (7 < uVar5) {
        uVar3 = 0;
        do {
          *(undefined8 *)(((ulong)(__dest + 1) & 0xfffffffffffffff8) + uVar3) =
               *(undefined8 *)((long)param_2 + (uVar3 - lVar4));
          uVar3 = uVar3 + 8;
        } while (uVar3 < uVar5);
      }
    }
    param_2 = (undefined8 *)((long)param_2 + uVar6);
    ossl_sm3_block_data_order(param_1,param_1 + 0x28,1);
    param_3 = (param_3 + uVar2) - 0x40;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x48) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
    if (0x3f < param_3) goto LAB_00580378;
  }
  if (param_3 == 0) {
    return 1;
  }
  iVar7 = (int)param_3;
LAB_005802c0:
  *(int *)(param_1 + 0x68) = iVar7;
  memcpy((void *)(param_1 + 0x28),param_2,param_3);
  return 1;
}

