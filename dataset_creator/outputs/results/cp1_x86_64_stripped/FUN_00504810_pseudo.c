
int FUN_00504810(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long in_FS_OFFSET;
  byte bVar14;
  int local_580;
  int local_568;
  undefined1 local_508 [64];
  undefined1 local_4c8 [64];
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  bVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004ef690();
  lVar13 = 0;
  if ((param_2 == 0) && (param_2 = FUN_004b2b10(), lVar13 = param_2, param_2 == 0)) {
    iVar3 = 0;
    goto LAB_00504de9;
  }
  FUN_004b2c00(param_2);
  uVar4 = FUN_004b2df0(param_2);
  lVar5 = FUN_004b2df0(param_2);
  if (((lVar5 == 0) || (*(long *)(param_1 + 8) == 0)) || (lVar6 = FUN_004efb90(param_1), lVar6 == 0)
     ) {
    lVar6 = 0;
    puVar7 = (undefined8 *)0x0;
    iVar3 = 0;
  }
  else {
    FUN_004b84d0(&DAT_00800800,0x20,uVar4);
    FUN_004b84d0(&DAT_00800820,0x20,lVar5);
    puVar7 = (undefined8 *)0x0;
    iVar3 = FUN_004f0f80(param_1,lVar6,uVar4,lVar5,param_2);
    if (iVar3 != 0) {
      puVar7 = (undefined8 *)FUN_0041aec0(0xc10,"../crypto/ec/ecp_nistp256.c",0x73a);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0051f420();
        iVar3 = 0;
        FUN_0051f540("../crypto/ec/ecp_nistp256.c",0x73d,"nistp256_pre_comp_new");
        FUN_0051f8f0(0x10,0xc0100,0);
      }
      else {
        LOCK();
        *(undefined4 *)(puVar7 + 0x180) = 1;
        UNLOCK();
        lVar5 = FUN_00422240();
        puVar7[0x181] = lVar5;
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ecp_nistp256.c",0x745,"nistp256_pre_comp_new");
          FUN_0051f8f0(0x10,0xc0100,0);
          FUN_0041ad60(puVar7,"../crypto/ec/ecp_nistp256.c",0x746);
          puVar7 = (undefined8 *)0x0;
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_004f10c0(param_1,lVar6,*(undefined8 *)(param_1 + 8),param_2);
          if (iVar3 == 0) {
            *puVar7 = DAT_007ffb80;
            puVar7[0x17f] = DAT_00800778;
            lVar5 = (long)puVar7 - (long)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
            puVar9 = (undefined8 *)((long)&DAT_007ffb80 - lVar5);
            puVar10 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
            for (uVar8 = (ulong)((int)lVar5 + 0xc00U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
              puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
            }
LAB_00504da0:
            *(undefined8 **)(param_1 + 0xa0) = puVar7;
            iVar3 = 1;
            puVar7 = (undefined8 *)0x0;
            *(undefined4 *)(param_1 + 0x98) = 2;
          }
          else {
            iVar3 = FUN_004fd8a0(local_508,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
            if (iVar3 != 0) {
              iVar3 = FUN_004fd8a0(local_4c8,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
              if (iVar3 != 0) {
                iVar3 = FUN_004fd8a0(local_488,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
                if (iVar3 != 0) {
                  FUN_004fcc90(puVar7 + 0xc,local_508);
                  FUN_004fcc90(puVar7 + 0x10,local_4c8);
                  FUN_004fcc90(puVar7 + 0x14,local_488);
                  local_568 = 4;
                  local_580 = 1;
                  do {
                    lVar5 = (long)local_580;
                    iVar3 = 0x1f;
                    puVar9 = puVar7 + lVar5 * 0xc + 200;
                    puVar10 = puVar7 + lVar5 * 0xc + 0xc0;
                    puVar12 = puVar7 + lVar5 * 0xc + 0xc4;
                    FUN_004fea10(puVar10,puVar12,puVar9,puVar7 + lVar5 * 0xc,
                                 puVar7 + lVar5 * 0xc + 4,puVar7 + lVar5 * 0xc + 8);
                    do {
                      FUN_004fea10(puVar10,puVar12,puVar9,puVar10,puVar12,puVar9);
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                    if (local_580 == 8) break;
                    puVar11 = puVar7 + lVar5 * 0xc + lVar5 * 0xc;
                    iVar3 = 0x1f;
                    puVar1 = puVar7 + (long)(local_580 * 2) * 0xc + 8;
                    puVar2 = puVar7 + (long)(local_580 * 2) * 0xc + 4;
                    FUN_004fea10(puVar11,puVar2,puVar1,puVar10,puVar12,puVar9);
                    do {
                      FUN_004fea10(puVar11,puVar2,puVar1,puVar11,puVar2,puVar1);
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                    local_580 = local_580 << 1;
                    local_568 = local_568 + -1;
                  } while (local_568 != 0);
                  puVar9 = puVar7 + 0xcc;
                  do {
                    puVar9[-0xcc] = 0;
                    puVar9[-0xc1] = 0;
                    puVar10 = (undefined8 *)((ulong)(puVar9 + -0xcb) & 0xfffffffffffffff8);
                    for (uVar8 = (ulong)(((int)puVar9 -
                                         (int)(undefined8 *)
                                              ((ulong)(puVar9 + -0xcb) & 0xfffffffffffffff8)) -
                                         0x600U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                      *puVar10 = 0;
                      puVar10 = puVar10 + (ulong)bVar14 * -2 + 1;
                    }
                    FUN_00502d60(puVar9 + -0x84,puVar9 + -0x80,puVar9 + -0x7c,puVar9 + -0x9c,
                                 puVar9 + -0x98,puVar9 + -0x94,puVar9 + -0xb4,puVar9 + -0xb0,
                                 puVar9 + -0xac);
                    FUN_00502d60(puVar9 + -0x54,puVar9 + -0x50,puVar9 + -0x4c);
                    FUN_00502d60(puVar9 + -0x3c,puVar9 + -0x38,puVar9 + -0x34,puVar9 + -0x6c,
                                 puVar9 + -0x68,puVar9 + -100,puVar9 + -0x9c,puVar9 + -0x98,
                                 puVar9 + -0x94);
                    FUN_00502d60(puVar9 + -0x24,puVar9 + -0x20,puVar9 + -0x1c,puVar9 + -0x3c,
                                 puVar9 + -0x38,puVar9 + -0x34,puVar9 + -0xb4,puVar9 + -0xb0,
                                 puVar9 + -0xac);
                    puVar10 = puVar9 + -0xa8;
                    do {
                      puVar12 = puVar10 + 0x18;
                      FUN_00502d60(puVar10,puVar10 + 4,puVar10 + 8,puVar10 + -0xc,puVar10 + -8,
                                   puVar10 + -4,puVar9 + -0xc0,puVar9 + -0xbc,puVar9 + -0xb8);
                      puVar10 = puVar12;
                    } while (puVar9 != puVar12);
                    puVar9 = puVar9 + 0xc0;
                  } while (puVar7 + 0x24c != puVar9);
                  FUN_00509df0(0x1f,puVar7 + 0xc,0x20,local_448,FUN_004fca90,FUN_004fd6b0,
                               FUN_004fcac0,&LAB_004fd9d0,&LAB_004fdad0,&LAB_00500930,FUN_004fcac0);
                  goto LAB_00504da0;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_004b2d50(param_2);
  FUN_004efcc0(lVar6);
  FUN_004b2b50(lVar13);
  FUN_005047b0(puVar7);
LAB_00504de9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar3;
}

