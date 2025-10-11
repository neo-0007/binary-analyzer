
undefined8 FUN_00777230(int param_1,char *param_2,long param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 local_38 [16];
  ushort local_28 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = FUN_00777150(param_2,param_2 + param_3,param_4);
      return uVar4;
    }
    goto LAB_00777474;
  }
  if (param_1 == 10) {
    puVar9 = (ushort *)local_38;
    pcVar1 = param_2 + param_3;
    local_38 = (undefined1  [16])0x0;
    if ((pcVar1 == param_2) ||
       ((pcVar6 = param_2, *param_2 == ':' &&
        ((pcVar6 = param_2 + 1, pcVar1 == pcVar6 || (param_2[1] != ':')))))) {
LAB_007773e0:
      uVar4 = 0;
    }
    else {
      if (pcVar6 < pcVar1) {
        puVar5 = (ushort *)0x0;
        uVar3 = 0;
        lVar11 = 0;
        pcVar10 = pcVar6;
LAB_007772fe:
        do {
          cVar2 = *pcVar6;
          iVar7 = (int)cVar2;
          pcVar6 = pcVar6 + 1;
          if ((byte)(cVar2 - 0x30U) < 10) {
            uVar8 = iVar7 - 0x30;
LAB_00777335:
            if ((lVar11 == 4) || (uVar3 = uVar3 << 4 | uVar8, 0xffff < uVar3)) goto LAB_007773e0;
            lVar11 = lVar11 + 1;
          }
          else {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              uVar8 = iVar7 - 0x57;
              goto LAB_00777335;
            }
            if ((byte)(cVar2 + 0xbfU) < 6) {
              uVar8 = iVar7 - 0x37;
              goto LAB_00777335;
            }
            if (iVar7 != 0x3a) {
              if ((iVar7 != 0x2e) || (local_28 < puVar9 + 2)) goto LAB_007773e0;
              iVar7 = FUN_00777150(pcVar10,pcVar1,puVar9);
              puVar9 = puVar9 + 2;
              if (0 < iVar7) goto LAB_00777373;
              uVar4 = 0;
              goto LAB_0077726e;
            }
            pcVar10 = pcVar6;
            if (lVar11 != 0) {
              if ((pcVar1 == pcVar6) || (local_28 < puVar9 + 1)) goto LAB_007773e0;
              lVar11 = 0;
              *puVar9 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
              uVar3 = 0;
              puVar9 = puVar9 + 1;
              goto LAB_007772fe;
            }
            bVar12 = puVar5 != (ushort *)0x0;
            puVar5 = puVar9;
            if (bVar12) goto LAB_007773e0;
          }
        } while (pcVar1 != pcVar6);
        if (lVar11 != 0) {
          if (local_28 < puVar9 + 1) goto LAB_007773e0;
          *puVar9 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
          puVar9 = puVar9 + 1;
        }
LAB_00777373:
        if (puVar5 == (ushort *)0x0) goto LAB_0077745c;
        if (local_28 == puVar9) goto LAB_007773e0;
        lVar11 = (long)local_28 - ((long)puVar9 - (long)puVar5);
        thunk_FUN_00713610(lVar11,puVar5);
        thunk_FUN_00713720(puVar5,0,lVar11 - (long)puVar5);
      }
      else {
LAB_0077745c:
        if (local_28 != puVar9) {
          uVar4 = 0;
          goto LAB_0077726e;
        }
      }
      uVar4 = 1;
      *param_4 = local_38._0_8_;
      param_4[1] = local_38._8_8_;
    }
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    uVar4 = 0xffffffff;
  }
LAB_0077726e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00777474:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

