
int FUN_005097c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  undefined8 *local_530;
  long local_528;
  long local_520;
  int local_508;
  undefined1 local_4c8 [1160];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004ef690();
  local_528 = 0;
  if ((param_2 == 0) && (param_2 = FUN_004b2b10(), local_528 = param_2, param_2 == 0)) {
    iVar2 = 0;
    goto LAB_00509cca;
  }
  FUN_004b2c00(param_2);
  uVar3 = FUN_004b2df0(param_2);
  lVar4 = FUN_004b2df0(param_2);
  if (((lVar4 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (local_520 = FUN_004efb90(param_1), local_520 == 0)) {
    local_520 = 0;
    iVar2 = 0;
    local_530 = (undefined8 *)0x0;
  }
  else {
    FUN_004b84d0(&DAT_00801786,0x42,uVar3);
    FUN_004b84d0(&DAT_008017c8,0x42,lVar4);
    iVar2 = FUN_004f0f80(param_1,local_520,uVar3,lVar4,param_2);
    local_530 = (undefined8 *)0x0;
    if (iVar2 != 0) {
      puVar5 = (undefined8 *)FUN_0041aec0(0xd90,"../crypto/ec/ecp_nistp521.c",0x6cf);
      local_530 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        FUN_0051f420();
        iVar2 = 0;
        FUN_0051f540("../crypto/ec/ecp_nistp521.c",0x6d2,"nistp521_pre_comp_new");
        FUN_0051f8f0(0x10,0xc0100,0);
      }
      else {
        LOCK();
        *(undefined4 *)(puVar5 + 0x1b0) = 1;
        UNLOCK();
        lVar4 = FUN_00422240();
        puVar5[0x1b1] = lVar4;
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ecp_nistp521.c",0x6da,"nistp521_pre_comp_new");
          FUN_0051f8f0(0x10,0xc0100,0);
          iVar2 = 0;
          FUN_0041ad60(puVar5,"../crypto/ec/ecp_nistp521.c",0x6db);
          local_530 = (undefined8 *)0x0;
        }
        else {
          iVar2 = FUN_004f10c0(param_1,local_520,*(undefined8 *)(param_1 + 8),param_2);
          if (iVar2 == 0) {
            *puVar5 = DAT_00800940;
            puVar5[0x1af] = DAT_008016b8;
            lVar4 = (long)puVar5 - (long)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
            puVar10 = (undefined8 *)((long)&DAT_00800940 - lVar4);
            puVar8 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
            for (uVar6 = (ulong)((int)lVar4 + 0xd80U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar8 = *puVar10;
              puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
              puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
            }
LAB_00509c60:
            iVar2 = 1;
            *(undefined4 *)(param_1 + 0x98) = 3;
            local_530 = (undefined8 *)0x0;
            *(undefined8 **)(param_1 + 0xa0) = puVar5;
          }
          else {
            puVar10 = puVar5 + 0x1b;
            iVar2 = FUN_00505c10(puVar10,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
            if (iVar2 != 0) {
              iVar2 = FUN_00505c10(puVar5 + 0x24,*(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
              if (iVar2 != 0) {
                iVar2 = FUN_00505c10(puVar5 + 0x2d,*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
                if (iVar2 != 0) {
                  local_508 = 3;
                  iVar2 = 1;
                  do {
                    lVar4 = (long)iVar2;
                    iVar7 = 0x81;
                    puVar8 = puVar5 + lVar4 * 0x1b + lVar4 * 0x1b;
                    puVar1 = puVar5 + (long)(iVar2 * 2) * 0x1b + 0x12;
                    puVar9 = puVar5 + (long)(iVar2 * 2) * 0x1b + 9;
                    FUN_00506f50(puVar8,puVar9,puVar1,puVar5 + lVar4 * 0x1b,
                                 puVar5 + lVar4 * 0x1b + 9,puVar5 + lVar4 * 0x1b + 0x12);
                    do {
                      FUN_00506f50(puVar8,puVar9,puVar1,puVar8,puVar9,puVar1);
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    iVar2 = iVar2 * 2;
                    local_508 = local_508 + -1;
                  } while (local_508 != 0);
                  *puVar5 = 0;
                  puVar5[0x1a] = 0;
                  puVar8 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
                  for (uVar6 = (ulong)(((int)puVar5 -
                                       (int)(undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)
                                       ) + 0xd8U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar8 = 0;
                    puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
                  }
                  FUN_005076a0(puVar5 + 0xa2,puVar5 + 0xab,puVar5 + 0xb4,puVar5 + 0x6c,puVar5 + 0x75
                               ,puVar5 + 0x7e,0,puVar5 + 0x36,puVar5 + 0x3f,puVar5 + 0x48);
                  FUN_005076a0(puVar5 + 0x10e,puVar5 + 0x117,puVar5 + 0x120);
                  FUN_005076a0(puVar5 + 0x144,puVar5 + 0x14d,puVar5 + 0x156,puVar5 + 0xd8,
                               puVar5 + 0xe1,puVar5 + 0xea,0,puVar5 + 0x6c,puVar5 + 0x75,
                               puVar5 + 0x7e);
                  FUN_005076a0(puVar5 + 0x17a,puVar5 + 0x183,puVar5 + 0x18c,puVar5 + 0x144,
                               puVar5 + 0x14d,puVar5 + 0x156,0,puVar5 + 0x36,puVar5 + 0x3f,
                               puVar5 + 0x48);
                  puVar8 = puVar5 + 0x51;
                  do {
                    puVar9 = puVar8 + 0x36;
                    FUN_005076a0(puVar8,puVar8 + 9,puVar8 + 0x12,puVar8 + -0x1b,puVar8 + -0x12,
                                 puVar8 + -9,0,puVar10,puVar5 + 0x24,puVar5 + 0x2d);
                    puVar8 = puVar9;
                  } while (puVar5 + 0x1cb != puVar9);
                  FUN_00509df0(0xf,puVar10,0x48,local_4c8,FUN_00504f10,FUN_00505620,FUN_00504f60,
                               FUN_005060f0,FUN_005066c0,FUN_00506720,FUN_00505630);
                  goto LAB_00509c60;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_004b2d50(param_2);
  FUN_004efcc0(local_520);
  FUN_004b2b50(local_528);
  FUN_00509760(local_530);
LAB_00509cca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

