
int FUN_005b65b0(uint *param_1,uint param_2,uint param_3,ushort param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  uint local_70;
  ulong local_50;
  undefined1 local_46;
  undefined1 auStack_45 [5];
  long local_40;
  
  uVar6 = param_3 & 7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (uint *)((long)(int)param_2 + (long)param_1);
  if (uVar6 == 2) {
    if ((param_2 & 1) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_strex.c",0xa1,"do_buf");
      iVar9 = -1;
      FUN_0051f8f0(0xd,0x81,0);
      goto LAB_005b6778;
    }
  }
  else if ((uVar6 == 4) && ((param_2 & 3) != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/a_strex.c",0x9b,"do_buf");
    iVar9 = -1;
    FUN_0051f8f0(0xd,0x85,0);
    goto LAB_005b6778;
  }
  iVar9 = 0;
  if (param_1 != puVar4) {
    iVar9 = 0;
    uVar5 = (param_4 & 1) << 5;
    puVar8 = param_1;
    local_70 = param_2;
    uVar7 = uVar5;
    if (uVar6 == 2) goto LAB_005b66cf;
LAB_005b665b:
    if (uVar6 < 3) {
      if (uVar6 == 0) {
        iVar2 = FUN_005b8770(puVar8,local_70,&local_50);
        if (-1 < iVar2) {
          local_70 = local_70 - iVar2;
          puVar8 = (uint *)((long)puVar8 + (long)iVar2);
          goto LAB_005b667f;
        }
      }
      else if (uVar6 == 1) {
        local_50 = (ulong)(byte)*puVar8;
        puVar8 = (uint *)((long)puVar8 + 1);
LAB_005b667f:
        if (puVar8 == puVar4) goto LAB_005b66ea;
LAB_005b6686:
        if ((param_3 & 8) != 0) goto LAB_005b66fe;
        while (iVar2 = FUN_005b63a0(local_50,uVar7 | param_4,param_5,param_6,param_7), -1 < iVar2) {
          iVar9 = iVar9 + iVar2;
          while( true ) {
            if (puVar8 == puVar4) goto LAB_005b6778;
            uVar7 = 0;
            if (puVar8 == param_1) {
              uVar7 = uVar5;
            }
            if (uVar6 != 2) goto LAB_005b665b;
LAB_005b66cf:
            uVar1 = *puVar8;
            puVar8 = (uint *)((long)puVar8 + 2);
            local_50 = (ulong)(ushort)((ushort)uVar1 << 8 | (ushort)uVar1 >> 8);
            if (puVar8 != puVar4) goto LAB_005b6686;
LAB_005b66ea:
            if ((param_4 & 1) != 0) {
              uVar7 = 0x40;
            }
            if ((param_3 & 8) == 0) break;
LAB_005b66fe:
            puVar10 = &local_46;
            iVar2 = FUN_005b8930(puVar10,6,local_50);
            if (0 < iVar2) {
              do {
                iVar3 = FUN_005b63a0(*puVar10,uVar7 | param_4,param_5,param_6,param_7);
                if (iVar3 < 0) goto LAB_005b6772;
                iVar9 = iVar9 + iVar3;
                puVar10 = puVar10 + 1;
              } while (auStack_45 + (iVar2 - 1) != puVar10);
            }
          }
        }
      }
    }
    else if (uVar6 == 4) {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      local_50 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18);
      goto LAB_005b667f;
    }
LAB_005b6772:
    iVar9 = -1;
  }
LAB_005b6778:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar9;
}

