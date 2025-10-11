
uint FUN_004bb600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  uint local_12c;
  undefined1 local_128 [56];
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_00405f40();
  iVar2 = FUN_004b7bb0(param_2);
  uVar7 = FUN_004b2fd0(param_6);
  if (lVar6 != 0) {
    iVar3 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar3 = iVar2 + 7;
    }
    uVar1 = (iVar3 >> 3) + 8;
    lVar8 = FUN_0041ad90(uVar1,"../crypto/bn/bn_rand.c",0x10d);
    if (lVar8 != 0) {
      iVar2 = FUN_004b87b0(param_3,local_a8,0x60);
      if (iVar2 < 0) {
        FUN_0051f420();
        lVar9 = 0;
        FUN_0051f540("../crypto/bn/bn_rand.c",0x118,"BN_generate_dsa_nonce");
        FUN_0051f8f0(3,0x75,0);
        uVar4 = 0;
      }
      else {
        lVar9 = FUN_004069d0(uVar7,"SHA512",0);
        if (lVar9 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/bn/bn_rand.c",0x11e,"BN_generate_dsa_nonce");
          FUN_0051f8f0(3,0x78,0);
          uVar4 = 0;
        }
        else {
          local_12c = 0;
          if (uVar1 != 0) {
            do {
              iVar2 = FUN_00429760(uVar7,local_128,0x40,0);
              if (iVar2 < 1) {
                uVar4 = 0;
                goto LAB_004bb88c;
              }
              uVar4 = FUN_00407430(lVar6,lVar9,0);
              if ((((uVar4 == 0) || (uVar4 = FUN_00405f60(lVar6,&local_12c,4), uVar4 == 0)) ||
                  (uVar4 = FUN_00405f60(lVar6,local_a8,0x60), uVar4 == 0)) ||
                 ((uVar4 = FUN_00405f60(lVar6,param_4,param_5), uVar4 == 0 ||
                  (uVar4 = FUN_00405f60(lVar6,local_128,0x40), uVar4 == 0)))) goto LAB_004bb88c;
              uVar4 = FUN_00406090(lVar6,&local_e8,0);
              if (uVar4 == 0) goto LAB_004bb88c;
              uVar4 = uVar1 - local_12c;
              if (0x40 < uVar1 - local_12c) {
                uVar4 = 0x40;
              }
              puVar10 = (undefined8 *)((ulong)local_12c + lVar8);
              if (uVar4 < 8) {
                if ((uVar4 & 4) == 0) {
                  if (uVar4 != 0) {
                    *(undefined1 *)puVar10 = (undefined1)local_e8;
                    if ((uVar4 & 2) != 0) {
                      *(undefined2 *)((long)puVar10 + ((ulong)uVar4 - 2)) =
                           *(undefined2 *)((long)&uStack_f0 + (ulong)uVar4 + 6);
                    }
                  }
                }
                else {
                  *(undefined4 *)puVar10 = local_e8;
                  *(undefined4 *)((long)puVar10 + ((ulong)uVar4 - 4)) =
                       *(undefined4 *)((long)&uStack_f0 + (ulong)uVar4 + 4);
                }
              }
              else {
                *puVar10 = CONCAT44(uStack_e4,local_e8);
                *(undefined8 *)((long)puVar10 + ((ulong)uVar4 - 8)) =
                     *(undefined8 *)((long)&uStack_f0 + (ulong)uVar4);
                lVar11 = (long)puVar10 - ((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
                uVar12 = uVar4 + (int)lVar11 & 0xfffffff8;
                if (7 < uVar12) {
                  uVar5 = 0;
                  do {
                    uVar13 = (ulong)uVar5;
                    uVar5 = uVar5 + 8;
                    *(undefined8 *)(((ulong)(puVar10 + 1) & 0xfffffffffffffff8) + uVar13) =
                         *(undefined8 *)((long)&local_e8 + (uVar13 - lVar11));
                  } while (uVar5 < uVar12);
                }
              }
              local_12c = uVar4 + local_12c;
            } while (local_12c < uVar1);
          }
          lVar11 = FUN_004b84d0(lVar8,uVar1,param_1);
          uVar4 = 0;
          if (lVar11 != 0) {
            iVar2 = FUN_004b34a0(0,param_1,param_1,param_2,param_6);
            uVar4 = (uint)(iVar2 == 1);
          }
        }
      }
      goto LAB_004bb88c;
    }
  }
  lVar9 = 0;
  uVar4 = 0;
  lVar8 = 0;
LAB_004bb88c:
  FUN_00406b90(lVar6);
  FUN_00406a50(lVar9);
  FUN_0041ad60(lVar8,"../crypto/bn/bn_rand.c",0x13e);
  FUN_004227b0(local_a8,0x60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

