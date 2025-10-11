
undefined8 FUN_005c9d10(long param_1,undefined8 param_2,long *param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char cVar10;
  char *pcVar11;
  bool bVar12;
  char *local_68;
  char *local_60;
  
  plVar6 = (long *)FUN_004c4f60();
  if (plVar6 != (long *)0x0) {
    iVar5 = thunk_FUN_007129d0(param_4);
    lVar7 = FUN_004c5070(plVar6,(long)(iVar5 + 1));
    if (lVar7 != 0) {
      lVar7 = *(long *)(param_1 + 8);
      iVar5 = 0;
      cVar4 = *param_4;
joined_r0x005c9d73:
      do {
        while (cVar4 < '\0') {
LAB_005c9de8:
          lVar7 = (long)iVar5;
          param_4 = param_4 + 1;
          iVar5 = iVar5 + 1;
          *(char *)(plVar6[1] + lVar7) = cVar4;
          lVar7 = *(long *)(param_1 + 8);
          cVar4 = *param_4;
        }
        uVar3 = *(ushort *)(lVar7 + (long)cVar4 * 2);
        if ((uVar3 & 0x40) != 0) {
          lVar8 = (long)iVar5;
          pcVar11 = param_4;
          do {
            param_4 = pcVar11 + 1;
            cVar10 = *param_4;
            iVar5 = (int)lVar8;
            if (-1 < cVar10) {
              uVar3 = *(ushort *)(lVar7 + (long)cVar10 * 2);
              if ((uVar3 & 8) != 0) goto LAB_005c9fc0;
              if (cVar10 == cVar4) goto LAB_005c9fd0;
              if ((uVar3 & 0x20) != 0) {
                cVar10 = pcVar11[2];
                param_4 = pcVar11 + 2;
                if ((-1 < cVar10) && ((*(byte *)(lVar7 + (long)cVar10 * 2) & 8) != 0))
                goto LAB_005c9fc0;
              }
            }
            *(char *)(plVar6[1] + lVar8) = cVar10;
            lVar7 = *(long *)(param_1 + 8);
            lVar8 = lVar8 + 1;
            pcVar11 = param_4;
          } while( true );
        }
        if ((uVar3 & 0x400) != 0) {
          lVar8 = (long)iVar5;
          pcVar11 = param_4;
          do {
            param_4 = pcVar11 + 1;
            cVar10 = *param_4;
            iVar5 = (int)lVar8;
            if (-1 < cVar10) {
              if ((*(byte *)(lVar7 + (long)cVar10 * 2) & 8) != 0) goto LAB_005c9fe0;
              if (cVar10 == cVar4) {
                cVar2 = pcVar11[2];
                if (cVar2 != cVar4) goto LAB_005c9ff0;
                param_4 = pcVar11 + 2;
              }
            }
            *(char *)(plVar6[1] + lVar8) = cVar10;
            lVar7 = *(long *)(param_1 + 8);
            lVar8 = lVar8 + 1;
            pcVar11 = param_4;
          } while( true );
        }
        if ((uVar3 & 0x20) != 0) {
          cVar4 = param_4[1];
          if (cVar4 < '\0') {
LAB_005ca000:
            if (cVar4 == 'b') {
              cVar4 = '\b';
            }
            else if (cVar4 == 't') {
              cVar4 = '\t';
            }
          }
          else {
            if ((*(byte *)(lVar7 + (long)cVar4 * 2) & 8) != 0) {
LAB_005ca18e:
              *(undefined1 *)(plVar6[1] + (long)iVar5) = 0;
              FUN_0041ad60(*param_3,"../crypto/conf/conf_def.c",0x30f);
              *param_3 = plVar6[1];
              FUN_0041ad60(plVar6,"../crypto/conf/conf_def.c",0x311);
              return 1;
            }
            if (cVar4 == 'r') {
              cVar4 = '\r';
            }
            else {
              if (cVar4 != 'n') goto LAB_005ca000;
              cVar4 = '\n';
            }
          }
          lVar7 = (long)iVar5;
          iVar5 = iVar5 + 1;
          *(char *)(plVar6[1] + lVar7) = cVar4;
          pcVar11 = param_4 + 2;
          lVar7 = *(long *)(param_1 + 8);
          param_4 = param_4 + 2;
          cVar4 = *pcVar11;
          goto joined_r0x005c9d73;
        }
        if ((uVar3 & 8) != 0) goto LAB_005ca18e;
        if (cVar4 != '$') goto LAB_005c9de8;
        bVar1 = param_4[1];
        if (*(int *)(param_1 + 0x18) == 0) {
LAB_005c9e36:
          if (bVar1 == 0x7b) goto LAB_005ca032;
          if (bVar1 == 0x28) {
            cVar4 = ')';
            goto LAB_005ca038;
          }
          pcVar11 = param_4 + 1;
          cVar4 = '\0';
          pcVar9 = pcVar11;
        }
        else {
          if (bVar1 != 0x7b) {
            if (bVar1 != 0x28) goto LAB_005c9de8;
            goto LAB_005c9e36;
          }
LAB_005ca032:
          cVar4 = '}';
LAB_005ca038:
          bVar1 = param_4[2];
          pcVar11 = param_4 + 2;
          pcVar9 = pcVar11;
        }
joined_r0x005c9e56:
        if (-1 < (char)bVar1) {
          uVar3 = *(ushort *)(lVar7 + (ulong)bVar1 * 2);
          if (((uVar3 & 0x107) != 0) || ((*(int *)(param_1 + 0x18) != 0 && ((uVar3 & 0x1000) != 0)))
             ) goto LAB_005c9e81;
          if ((bVar1 == 0x3a) && (pcVar11[1] == ':')) {
            local_68 = pcVar11 + 2;
            *pcVar11 = '\0';
            while ((cVar10 = *local_68, -1 < cVar10 &&
                   ((uVar3 = *(ushort *)(*(long *)(param_1 + 8) + (long)cVar10 * 2),
                    (uVar3 & 0x107) != 0 ||
                    ((*(int *)(param_1 + 0x18) != 0 && ((uVar3 & 0x1000) != 0))))))) {
              local_68 = local_68 + 1;
            }
            *local_68 = '\0';
            if (cVar4 != '\0') {
              if (cVar4 == cVar10) {
                local_60 = local_68 + 1;
                pcVar9 = (char *)FUN_005c9770(param_1,pcVar9);
                goto LAB_005ca0d1;
              }
              goto LAB_005c9eb0;
            }
            pcVar9 = (char *)FUN_005c9770(param_1,pcVar9);
            local_60 = local_68;
LAB_005ca0d1:
            *pcVar11 = ':';
            goto LAB_005ca0f6;
          }
        }
        cVar10 = *pcVar11;
        *pcVar11 = '\0';
        local_68 = pcVar11;
        if (cVar4 == '\0') {
          pcVar9 = (char *)FUN_005c9770(param_1,param_2,pcVar9);
          local_60 = pcVar11;
        }
        else {
          if (cVar4 != cVar10) {
LAB_005c9eb0:
            FUN_0051f420();
            FUN_0051f540("../crypto/conf/conf_def.c",0x2db,"str_copy");
            FUN_0051f8f0(0xe,0x66,0);
            break;
          }
          pcVar9 = (char *)FUN_005c9770(param_1,param_2,pcVar9);
          local_60 = pcVar11 + 1;
        }
LAB_005ca0f6:
        *local_68 = cVar10;
        if (pcVar9 == (char *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/conf/conf_def.c",0x2ef,"str_copy");
          FUN_0051f8f0(0xe,0x68,0);
          break;
        }
        lVar7 = thunk_FUN_007129d0(pcVar9);
        if ((char *)0x10000 < param_4 + lVar7 + (*plVar6 - (long)local_60)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/conf/conf_def.c",0x2f4,"str_copy");
          FUN_0051f8f0(0xe,0x74,0);
          break;
        }
        lVar7 = FUN_004c5190(plVar6);
        if (lVar7 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/conf/conf_def.c",0x2f8,"str_copy");
          FUN_0051f8f0(0xe,0xc0100,0);
          break;
        }
        lVar8 = (long)iVar5;
        cVar4 = *pcVar9;
        lVar7 = lVar8;
        while (cVar4 != '\0') {
          iVar5 = (int)lVar7 + 1;
          *(char *)(plVar6[1] + lVar7) = cVar4;
          lVar7 = lVar7 + 1;
          cVar4 = pcVar9[lVar7 - lVar8];
        }
        *local_68 = cVar10;
        lVar7 = *(long *)(param_1 + 8);
        param_4 = local_60;
        cVar4 = *local_60;
      } while( true );
    }
    FUN_004c4ff0(plVar6);
  }
  return 0;
LAB_005c9fc0:
  bVar12 = cVar10 == cVar4;
  cVar4 = cVar10;
  if (bVar12) {
LAB_005c9fd0:
    pcVar11 = param_4 + 1;
    param_4 = param_4 + 1;
    cVar4 = *pcVar11;
  }
  goto joined_r0x005c9d73;
LAB_005c9fe0:
  bVar12 = cVar10 == cVar4;
  cVar4 = cVar10;
  if (bVar12) {
    cVar2 = pcVar11[2];
LAB_005c9ff0:
    param_4 = pcVar11 + 2;
    cVar4 = cVar2;
  }
  goto joined_r0x005c9d73;
LAB_005c9e81:
  bVar1 = pcVar11[1];
  pcVar11 = pcVar11 + 1;
  goto joined_r0x005c9e56;
}

