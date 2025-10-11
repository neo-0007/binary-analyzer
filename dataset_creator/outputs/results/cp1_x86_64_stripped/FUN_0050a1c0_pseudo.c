
bool FUN_0050a1c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004b8240(param_2,4);
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar4 = 0x530;
  }
  else {
    iVar1 = FUN_004b7bb0(param_3);
    if (((iVar1 < 0x101) && (iVar1 = FUN_004b7d60(param_3), iVar1 == 0)) ||
       ((lVar2 = FUN_004b2df0(param_4), lVar2 != 0 &&
        (iVar1 = FUN_004b8a20(lVar2,param_3,*(undefined8 *)(param_1 + 0x10),param_4),
        param_3 = lVar2, iVar1 != 0)))) {
      iVar1 = FUN_004b73e0(local_248,param_3,4);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ecp_nistz256.c",0x540,"ecp_nistz256_inv_mod_ord");
        FUN_0051f8f0(0x10,0x92,0);
        bVar6 = false;
      }
      else {
        FUN_005f64a0(local_228,local_248,&DAT_00801940);
        FUN_005f6800(local_208,local_228,1);
        FUN_005f64a0(local_1e8,local_228,local_208);
        FUN_005f64a0(local_1c8,local_1e8,local_208);
        FUN_005f64a0(local_1a8,local_1c8,local_208);
        FUN_005f6800(local_188,local_1c8,1);
        FUN_005f64a0(local_168,local_188,local_1c8);
        FUN_005f6800(local_148,local_188,1);
        FUN_005f64a0(local_148,local_148,local_228);
        FUN_005f6800(local_128,local_148,1);
        FUN_005f64a0(local_108,local_128,local_1c8);
        FUN_005f64a0(local_e8,local_128,local_148);
        FUN_005f6800(local_c8,local_e8,2);
        FUN_005f64a0(local_c8,local_c8,local_1e8);
        FUN_005f6800(local_a8,local_c8,8);
        FUN_005f64a0(local_a8,local_a8,local_c8);
        FUN_005f6800(local_88,local_a8,0x10);
        FUN_005f64a0(local_88,local_88,local_a8);
        FUN_005f6800(auStack_268,local_88,0x40);
        FUN_005f64a0(auStack_268,auStack_268,local_88);
        bVar3 = 0x20;
        pbVar5 = &DAT_00801901;
        while( true ) {
          FUN_005f6800(auStack_268,auStack_268,bVar3);
          FUN_005f64a0(auStack_268,auStack_268,local_228 + (ulong)*pbVar5 * 0x20);
          if (pbVar5 + 2 == &DAT_00801937) break;
          bVar3 = pbVar5[1];
          pbVar5 = pbVar5 + 2;
        }
        FUN_005f64a0(auStack_268,auStack_268,&DAT_008018e0);
        iVar1 = FUN_004b7470(param_2,auStack_268,4);
        bVar6 = iVar1 != 0;
      }
      goto LAB_0050a46b;
    }
    FUN_0051f420();
    uVar4 = 0x539;
  }
  bVar6 = false;
  FUN_0051f540("../crypto/ec/ecp_nistz256.c",uVar4,"ecp_nistz256_inv_mod_ord");
  FUN_0051f8f0(0x10,0x80003,0);
LAB_0050a46b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar6;
}

