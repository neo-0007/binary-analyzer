
undefined8 FUN_007774c0(int param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  ushort *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 local_48 [16];
  ushort local_38 [4];
  long local_30;
  
  puVar7 = (ushort *)local_48;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = thunk_FUN_007129d0(param_2);
  if (param_1 == 2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = FUN_00777150(param_2,param_2 + lVar2,param_3);
      return uVar3;
    }
    goto LAB_007776f3;
  }
  if (param_1 == 10) {
    pcVar4 = param_2 + lVar2;
    local_48 = (undefined1  [16])0x0;
    if ((param_2 == pcVar4) ||
       ((pcVar6 = param_2, *param_2 == ':' &&
        ((pcVar6 = param_2 + 1, pcVar4 == pcVar6 || (param_2[1] != ':')))))) {
LAB_00777660:
      uVar3 = 0;
    }
    else {
      if (pcVar6 < pcVar4) {
        puVar11 = (ushort *)0x0;
        uVar5 = 0;
        lVar2 = 0;
        puVar7 = (ushort *)local_48;
        pcVar10 = pcVar6;
LAB_0077759c:
        do {
          cVar1 = *pcVar6;
          iVar8 = (int)cVar1;
          pcVar6 = pcVar6 + 1;
          if ((byte)(cVar1 - 0x30U) < 10) {
            uVar9 = iVar8 - 0x30;
LAB_007775cf:
            if ((lVar2 == 4) || (uVar5 = uVar5 << 4 | uVar9, 0xffff < uVar5)) goto LAB_00777660;
            lVar2 = lVar2 + 1;
          }
          else {
            if ((byte)(cVar1 + 0x9fU) < 6) {
              uVar9 = iVar8 - 0x57;
              goto LAB_007775cf;
            }
            if ((byte)(cVar1 + 0xbfU) < 6) {
              uVar9 = iVar8 - 0x37;
              goto LAB_007775cf;
            }
            if (iVar8 != 0x3a) {
              if ((iVar8 != 0x2e) || (local_38 < puVar7 + 2)) goto LAB_00777660;
              iVar8 = FUN_00777150(pcVar10,pcVar4,puVar7);
              puVar7 = puVar7 + 2;
              if (0 < iVar8) goto LAB_00777609;
              uVar3 = 0;
              goto LAB_0077750b;
            }
            pcVar10 = pcVar6;
            if (lVar2 != 0) {
              if ((pcVar4 == pcVar6) || (local_38 < puVar7 + 1)) goto LAB_00777660;
              lVar2 = 0;
              *puVar7 = (ushort)uVar5 << 8 | (ushort)uVar5 >> 8;
              uVar5 = 0;
              puVar7 = puVar7 + 1;
              goto LAB_0077759c;
            }
            bVar12 = puVar11 != (ushort *)0x0;
            puVar11 = puVar7;
            if (bVar12) goto LAB_00777660;
          }
        } while (pcVar4 != pcVar6);
        if (lVar2 != 0) {
          if (local_38 < puVar7 + 1) goto LAB_00777660;
          *puVar7 = (ushort)uVar5 << 8 | (ushort)uVar5 >> 8;
          puVar7 = puVar7 + 1;
        }
LAB_00777609:
        if (puVar11 == (ushort *)0x0) goto LAB_007776db;
        if (local_38 == puVar7) goto LAB_00777660;
        lVar2 = (long)local_38 - ((long)puVar7 - (long)puVar11);
        thunk_FUN_00713610(lVar2,puVar11);
        thunk_FUN_00713720(puVar11,0,lVar2 - (long)puVar11);
      }
      else {
LAB_007776db:
        if (local_38 != puVar7) {
          uVar3 = 0;
          goto LAB_0077750b;
        }
      }
      uVar3 = 1;
      *param_3 = local_48._0_8_;
      param_3[1] = local_48._8_8_;
    }
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    uVar3 = 0xffffffff;
  }
LAB_0077750b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_007776f3:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

