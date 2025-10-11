
undefined8 str_copy(CONF *param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  char *name;
  byte bVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  BUF_MEM *str;
  size_t sVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  char cVar12;
  char *pcVar13;
  bool bVar14;
  char *local_68;
  char *local_60;
  
  str = BUF_MEM_new();
  if (str != (BUF_MEM *)0x0) {
    sVar7 = strlen(param_4);
    iVar5 = BUF_MEM_grow(str,(long)((int)sVar7 + 1));
    if (CONCAT44(extraout_var,iVar5) != 0) {
      pvVar11 = param_1->meth_data;
      iVar5 = 0;
      cVar4 = *param_4;
joined_r0x005be4e3:
      do {
        while (cVar4 < '\0') {
LAB_005be558:
          lVar10 = (long)iVar5;
          param_4 = param_4 + 1;
          iVar5 = iVar5 + 1;
          str->data[lVar10] = cVar4;
          pvVar11 = param_1->meth_data;
          cVar4 = *param_4;
        }
        uVar3 = *(ushort *)((long)pvVar11 + (long)cVar4 * 2);
        if ((uVar3 & 0x40) != 0) {
          lVar10 = (long)iVar5;
          pcVar13 = param_4;
          do {
            param_4 = pcVar13 + 1;
            cVar12 = *param_4;
            iVar5 = (int)lVar10;
            if (-1 < cVar12) {
              uVar3 = *(ushort *)((long)pvVar11 + (long)cVar12 * 2);
              if ((uVar3 & 8) != 0) goto LAB_005be730;
              if (cVar12 == cVar4) goto LAB_005be740;
              if ((uVar3 & 0x20) != 0) {
                cVar12 = pcVar13[2];
                param_4 = pcVar13 + 2;
                if ((-1 < cVar12) && ((*(byte *)((long)pvVar11 + (long)cVar12 * 2) & 8) != 0))
                goto LAB_005be730;
              }
            }
            str->data[lVar10] = cVar12;
            pvVar11 = param_1->meth_data;
            lVar10 = lVar10 + 1;
            pcVar13 = param_4;
          } while( true );
        }
        if ((uVar3 & 0x400) != 0) {
          lVar10 = (long)iVar5;
          pcVar13 = param_4;
          do {
            param_4 = pcVar13 + 1;
            cVar12 = *param_4;
            iVar5 = (int)lVar10;
            if (-1 < cVar12) {
              if ((*(byte *)((long)pvVar11 + (long)cVar12 * 2) & 8) != 0) goto LAB_005be750;
              if (cVar12 == cVar4) {
                cVar2 = pcVar13[2];
                if (cVar2 != cVar4) goto LAB_005be760;
                param_4 = pcVar13 + 2;
              }
            }
            str->data[lVar10] = cVar12;
            pvVar11 = param_1->meth_data;
            lVar10 = lVar10 + 1;
            pcVar13 = param_4;
          } while( true );
        }
        if ((uVar3 & 0x20) != 0) {
          cVar4 = param_4[1];
          if (cVar4 < '\0') {
LAB_005be770:
            if (cVar4 == 'b') {
              cVar4 = '\b';
            }
            else if (cVar4 == 't') {
              cVar4 = '\t';
            }
          }
          else {
            if ((*(byte *)((long)pvVar11 + (long)cVar4 * 2) & 8) != 0) {
LAB_005be8fe:
              str->data[iVar5] = '\0';
              CRYPTO_free((void *)*param_3);
              *param_3 = str->data;
              CRYPTO_free(str);
              return 1;
            }
            if (cVar4 == 'r') {
              cVar4 = '\r';
            }
            else {
              if (cVar4 != 'n') goto LAB_005be770;
              cVar4 = '\n';
            }
          }
          lVar10 = (long)iVar5;
          iVar5 = iVar5 + 1;
          str->data[lVar10] = cVar4;
          pcVar13 = param_4 + 2;
          pvVar11 = param_1->meth_data;
          param_4 = param_4 + 2;
          cVar4 = *pcVar13;
          goto joined_r0x005be4e3;
        }
        if ((uVar3 & 8) != 0) goto LAB_005be8fe;
        if (cVar4 != '$') goto LAB_005be558;
        bVar1 = param_4[1];
        if (*(int *)&param_1[1].meth == 0) {
LAB_005be5a6:
          if (bVar1 == 0x7b) goto LAB_005be7a2;
          if (bVar1 == 0x28) {
            cVar4 = ')';
            goto LAB_005be7a8;
          }
          pcVar13 = param_4 + 1;
          cVar4 = '\0';
          pcVar9 = pcVar13;
        }
        else {
          if (bVar1 != 0x7b) {
            if (bVar1 != 0x28) goto LAB_005be558;
            goto LAB_005be5a6;
          }
LAB_005be7a2:
          cVar4 = '}';
LAB_005be7a8:
          bVar1 = param_4[2];
          pcVar13 = param_4 + 2;
          pcVar9 = pcVar13;
        }
joined_r0x005be5c6:
        if (-1 < (char)bVar1) {
          uVar3 = *(ushort *)((long)pvVar11 + (ulong)bVar1 * 2);
          if (((uVar3 & 0x107) != 0) || ((*(int *)&param_1[1].meth != 0 && ((uVar3 & 0x1000) != 0)))
             ) goto LAB_005be5f1;
          if ((bVar1 == 0x3a) && (pcVar13[1] == ':')) {
            name = pcVar13 + 2;
            *pcVar13 = '\0';
            local_68 = name;
            while ((cVar12 = *local_68, -1 < cVar12 &&
                   ((uVar3 = *(ushort *)((long)param_1->meth_data + (long)cVar12 * 2),
                    (uVar3 & 0x107) != 0 ||
                    ((*(int *)&param_1[1].meth != 0 && ((uVar3 & 0x1000) != 0))))))) {
              local_68 = local_68 + 1;
            }
            *local_68 = '\0';
            if (cVar4 != '\0') {
              if (cVar4 == cVar12) {
                local_60 = local_68 + 1;
                pcVar9 = _CONF_get_string(param_1,pcVar9,name);
                goto LAB_005be841;
              }
              goto LAB_005be620;
            }
            pcVar9 = _CONF_get_string(param_1,pcVar9,name);
            local_60 = local_68;
LAB_005be841:
            *pcVar13 = ':';
            goto LAB_005be866;
          }
        }
        cVar12 = *pcVar13;
        *pcVar13 = '\0';
        local_68 = pcVar13;
        if (cVar4 == '\0') {
          pcVar9 = _CONF_get_string(param_1,param_2,pcVar9);
          local_60 = pcVar13;
        }
        else {
          if (cVar4 != cVar12) {
LAB_005be620:
            ERR_new();
            ERR_set_debug("../crypto/conf/conf_def.c",0x2db,"str_copy");
            ERR_set_error(0xe,0x66,0);
            break;
          }
          pcVar9 = _CONF_get_string(param_1,param_2,pcVar9);
          local_60 = pcVar13 + 1;
        }
LAB_005be866:
        *local_68 = cVar12;
        if (pcVar9 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/conf/conf_def.c",0x2ef,"str_copy");
          ERR_set_error(0xe,0x68,0);
          break;
        }
        sVar7 = strlen(pcVar9);
        if ((char *)0x10000 < param_4 + sVar7 + (str->length - (long)local_60)) {
          ERR_new();
          ERR_set_debug("../crypto/conf/conf_def.c",0x2f4,"str_copy");
          ERR_set_error(0xe,0x74,0);
          break;
        }
        iVar6 = BUF_MEM_grow_clean(str,(size_t)(param_4 + sVar7 + (str->length - (long)local_60)));
        if (CONCAT44(extraout_var_00,iVar6) == 0) {
          ERR_new();
          ERR_set_debug("../crypto/conf/conf_def.c",0x2f8,"str_copy");
          ERR_set_error(0xe,0xc0100,0);
          break;
        }
        lVar8 = (long)iVar5;
        cVar4 = *pcVar9;
        lVar10 = lVar8;
        while (cVar4 != '\0') {
          iVar5 = (int)lVar10 + 1;
          str->data[lVar10] = cVar4;
          lVar10 = lVar10 + 1;
          cVar4 = pcVar9[lVar10 - lVar8];
        }
        *local_68 = cVar12;
        pvVar11 = param_1->meth_data;
        param_4 = local_60;
        cVar4 = *local_60;
      } while( true );
    }
    BUF_MEM_free(str);
  }
  return 0;
LAB_005be730:
  bVar14 = cVar12 == cVar4;
  cVar4 = cVar12;
  if (bVar14) {
LAB_005be740:
    pcVar13 = param_4 + 1;
    param_4 = param_4 + 1;
    cVar4 = *pcVar13;
  }
  goto joined_r0x005be4e3;
LAB_005be750:
  bVar14 = cVar12 == cVar4;
  cVar4 = cVar12;
  if (bVar14) {
    cVar2 = pcVar13[2];
LAB_005be760:
    param_4 = pcVar13 + 2;
    cVar4 = cVar2;
  }
  goto joined_r0x005be4e3;
LAB_005be5f1:
  bVar1 = pcVar13[1];
  pcVar13 = pcVar13 + 1;
  goto joined_r0x005be5c6;
}

