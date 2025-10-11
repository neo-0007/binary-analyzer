
int FUN_004fc3d0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  byte bVar13;
  long local_4c0;
  int local_4b8;
  int local_498;
  undefined1 local_448 [1032];
  long local_40;
  
  bVar13 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004ef690();
  local_4c0 = 0;
  if ((param_2 == 0) && (param_2 = FUN_004b2b10(), local_4c0 = param_2, param_2 == 0)) {
    iVar2 = 0;
    goto LAB_004fc95a;
  }
  FUN_004b2c00(param_2);
  uVar3 = FUN_004b2df0(param_2);
  lVar4 = FUN_004b2df0(param_2);
  if (((lVar4 == 0) || (*(long *)(param_1 + 8) == 0)) || (lVar5 = FUN_004efb90(param_1), lVar5 == 0)
     ) {
    lVar5 = 0;
    puVar6 = (undefined8 *)0x0;
    iVar2 = 0;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    FUN_004b84d0(&DAT_007ffa34,0x1c,uVar3);
    FUN_004b84d0(&DAT_007ffa50,0x1c,lVar4);
    iVar2 = FUN_004f0f80(param_1,lVar5,uVar3,lVar4,param_2);
    if (iVar2 != 0) {
      puVar6 = (undefined8 *)FUN_0041aec0(0xc10,"../crypto/ec/ecp_nistp224.c",0x4d7);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_0051f420();
        iVar2 = 0;
        FUN_0051f540("../crypto/ec/ecp_nistp224.c",0x4da,"nistp224_pre_comp_new");
        FUN_0051f8f0(0x10,0xc0100,0);
      }
      else {
        LOCK();
        *(undefined4 *)(puVar6 + 0x180) = 1;
        UNLOCK();
        lVar4 = FUN_00422240();
        puVar6[0x181] = lVar4;
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ecp_nistp224.c",0x4e2,"nistp224_pre_comp_new");
          FUN_0051f8f0(0x10,0xc0100,0);
          FUN_0041ad60(puVar6,"../crypto/ec/ecp_nistp224.c",0x4e3);
          puVar6 = (undefined8 *)0x0;
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_004f10c0(param_1,lVar5,*(undefined8 *)(param_1 + 8),param_2);
          if (iVar2 == 0) {
            *puVar6 = DAT_007fede0;
            puVar6[0x17f] = DAT_007ff9d8;
            lVar4 = (long)puVar6 - (long)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
            puVar9 = (undefined8 *)((long)&DAT_007fede0 - lVar4);
            puVar11 = (undefined8 *)((ulong)(puVar6 + 1) & 0xfffffffffffffff8);
            for (uVar7 = (ulong)((int)lVar4 + 0xc00U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
              puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
            }
          }
          else {
            iVar2 = FUN_004f96d0(puVar6 + 0xc,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
            if (((iVar2 == 0) ||
                (iVar2 = FUN_004f96d0(puVar6 + 0x10,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18)),
                iVar2 == 0)) ||
               (iVar2 = FUN_004f96d0(puVar6 + 0x14,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20)),
               iVar2 == 0)) goto LAB_004fc938;
            local_498 = 4;
            local_4b8 = 1;
            do {
              lVar4 = (long)local_4b8;
              iVar2 = 0x1b;
              puVar9 = puVar6 + lVar4 * 0xc + 200;
              puVar11 = puVar6 + lVar4 * 0xc + 0xc4;
              puVar12 = puVar6 + lVar4 * 0xc + 0xc0;
              FUN_004f9a30(puVar12,puVar11,puVar9,puVar6 + lVar4 * 0xc,puVar6 + lVar4 * 0xc + 4,
                           puVar6 + lVar4 * 0xc + 8);
              do {
                FUN_004f9a30(puVar12,puVar11,puVar9,puVar12,puVar11,puVar9);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              if (local_4b8 == 8) break;
              puVar8 = puVar6 + lVar4 * 0xc + lVar4 * 0xc;
              iVar2 = 0x1b;
              puVar1 = puVar6 + (long)(local_4b8 * 2) * 0xc + 8;
              puVar10 = puVar6 + (long)(local_4b8 * 2) * 0xc + 4;
              FUN_004f9a30(puVar8,puVar10,puVar1,puVar12,puVar11,puVar9);
              do {
                FUN_004f9a30(puVar8,puVar10,puVar1,puVar8,puVar10,puVar1);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              local_4b8 = local_4b8 << 1;
              local_498 = local_498 + -1;
            } while (local_498 != 0);
            puVar9 = puVar6 + 0xcc;
            do {
              puVar9[-0xcc] = 0;
              puVar11 = puVar9 + -0xac;
              puVar12 = puVar9 + -0xb0;
              puVar9[-0xc1] = 0;
              puVar1 = puVar9 + -0xb4;
              puVar10 = (undefined8 *)((ulong)(puVar9 + -0xcb) & 0xfffffffffffffff8);
              for (uVar7 = (ulong)(((int)puVar9 -
                                   (int)(undefined8 *)((ulong)(puVar9 + -0xcb) & 0xfffffffffffffff8)
                                   ) - 0x600U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
              }
              FUN_004fa160(puVar9 + -0x84,puVar9 + -0x80,puVar9 + -0x7c,puVar9 + -0x9c,
                           puVar9 + -0x98,puVar9 + -0x94,0,puVar1,puVar12,puVar11);
              FUN_004fa160(puVar9 + -0x54,puVar9 + -0x50,puVar9 + -0x4c,puVar9 + -0x6c,
                           puVar9 + -0x68,puVar9 + -100,0,puVar1,puVar12,puVar11);
              FUN_004fa160(puVar9 + -0x3c,puVar9 + -0x38,puVar9 + -0x34,puVar9 + -0x6c,
                           puVar9 + -0x68,puVar9 + -100,0,puVar9 + -0x9c,puVar9 + -0x98,
                           puVar9 + -0x94);
              FUN_004fa160(puVar9 + -0x24,puVar9 + -0x20,puVar9 + -0x1c,puVar9 + -0x3c,
                           puVar9 + -0x38,puVar9 + -0x34,0,puVar1,puVar12,puVar11);
              puVar11 = puVar9 + -0xa8;
              do {
                puVar12 = puVar11 + 0x18;
                FUN_004fa160(puVar11,puVar11 + 4,puVar11 + 8,puVar11 + -0xc,puVar11 + -8,
                             puVar11 + -4,0,puVar9 + -0xc0,puVar9 + -0xbc,puVar9 + -0xb8);
                puVar11 = puVar12;
              } while (puVar9 != puVar12);
              puVar9 = puVar9 + 0xc0;
            } while (puVar6 + 0x24c != puVar9);
            FUN_00509df0(0x1f,puVar6 + 0xc,0x20,local_448,FUN_004f8990,&LAB_004fa0d0,FUN_004f89c0,
                         FUN_004fc0b0,&LAB_004fc1c0,FUN_004f90e0,FUN_004f8f70);
          }
          *(undefined8 **)(param_1 + 0xa0) = puVar6;
          iVar2 = 1;
          puVar6 = (undefined8 *)0x0;
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
      }
    }
  }
LAB_004fc938:
  FUN_004b2d50(param_2);
  FUN_004efcc0(lVar5);
  FUN_004b2b50(local_4c0);
  FUN_004fc370(puVar6);
LAB_004fc95a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

