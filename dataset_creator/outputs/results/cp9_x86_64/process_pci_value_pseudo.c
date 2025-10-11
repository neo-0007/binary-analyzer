
int process_pci_value(CONF_VALUE *param_1,long *param_2,ASN1_INTEGER **param_3,long *param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ASN1_OBJECT *pAVar8;
  void *pvVar9;
  BIO *b;
  ASN1_OCTET_STRING *pAVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  size_t local_850;
  undefined1 local_848 [2056];
  long local_40;
  
  pcVar2 = param_1->name;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = strcmp(pcVar2,"language");
  if (iVar5 == 0) {
    if (*param_2 == 0) {
      pAVar8 = OBJ_txt2obj(param_1->value,0);
      *param_2 = (long)pAVar8;
      if (pAVar8 != (ASN1_OBJECT *)0x0) goto LAB_0060d8f0;
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",0x62,"process_pci_value");
      uVar11 = 0x6e;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",0x5d,"process_pci_value");
      uVar11 = 0x9b;
    }
  }
  else {
    iVar5 = strcmp(pcVar2,"pathlen");
    if (iVar5 != 0) {
      iVar5 = strcmp(pcVar2,"policy");
      if (iVar5 != 0) {
LAB_0060d8f0:
        iVar5 = 1;
        goto LAB_0060d75c;
      }
      iVar5 = 0;
      if (*param_4 == 0) {
        pAVar10 = ASN1_OCTET_STRING_new();
        iVar5 = 1;
        *param_4 = (long)pAVar10;
        if (pAVar10 == (ASN1_OCTET_STRING *)0x0) {
          ERR_new();
          iVar5 = 0;
          ERR_set_debug("../crypto/x509/v3_pci.c",0x79,"process_pci_value");
          ERR_set_error(0x22,0xc0100,0);
          ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",
                             param_1->value);
          goto LAB_0060d75c;
        }
      }
      pcVar2 = param_1->value;
      iVar6 = strncmp(pcVar2,"hex:",4);
      if (iVar6 == 0) {
        pvVar7 = (void *)OPENSSL_hexstr2buf(pcVar2 + 4,&local_850);
        if (pvVar7 != (void *)0x0) {
          pvVar9 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),
                                  *(int *)*param_4 + (int)local_850 + 1,"../crypto/x509/v3_pci.c",
                                  0x88);
          if (pvVar9 != (void *)0x0) {
            piVar3 = (int *)*param_4;
            *(void **)(piVar3 + 2) = pvVar9;
            memcpy((void *)((long)pvVar9 + (long)*piVar3),pvVar7,local_850);
            piVar3 = (int *)*param_4;
            iVar5 = *piVar3;
            *piVar3 = iVar5 + (int)local_850;
            *(undefined1 *)(*(long *)(piVar3 + 2) + (long)(iVar5 + (int)local_850)) = 0;
            CRYPTO_free(pvVar7);
            goto LAB_0060d8f0;
          }
          CRYPTO_free(pvVar7);
          CRYPTO_free(*(void **)(*param_4 + 8));
          puVar4 = (undefined4 *)*param_4;
          *(undefined8 *)(puVar4 + 2) = 0;
          *puVar4 = 0;
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_pci.c",0x99,"process_pci_value");
          uVar11 = 0xc0100;
          goto LAB_0060d964;
        }
      }
      else {
        iVar6 = strncmp(pcVar2,"file:",5);
        if (iVar6 == 0) {
          pvVar7 = (void *)0x0;
          b = BIO_new_file(pcVar2 + 5,"r");
          if (b == (BIO *)0x0) {
            ERR_new();
            uVar11 = 0xa3;
LAB_0060dcd8:
            ERR_set_debug("../crypto/x509/v3_pci.c",uVar11,"process_pci_value");
            uVar11 = 0x80020;
          }
          else {
            do {
              while( true ) {
                iVar6 = BIO_read(b,local_848,0x800);
                if (iVar6 < 1) break;
                pvVar7 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),iVar6 + *(int *)*param_4 + 1
                                        ,"../crypto/x509/v3_pci.c",0xac);
                piVar3 = (int *)*param_4;
                if (pvVar7 == (void *)0x0) {
                  CRYPTO_free(*(void **)(piVar3 + 2));
                  puVar4 = (undefined4 *)*param_4;
                  *(undefined8 *)(puVar4 + 2) = 0;
                  *puVar4 = 0;
                  ERR_new();
                  ERR_set_debug("../crypto/x509/v3_pci.c",0xb3,"process_pci_value");
                  ERR_set_error(0x22,0xc0100,0);
                  ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",
                                     param_1->value);
                  BIO_free_all(b);
                  goto LAB_0060d9a1;
                }
                *(void **)(piVar3 + 2) = pvVar7;
                memcpy((void *)((long)*piVar3 + (long)pvVar7),local_848,(long)iVar6);
                piVar3 = (int *)*param_4;
                iVar1 = *piVar3;
                *piVar3 = iVar6 + iVar1;
                *(undefined1 *)(*(long *)(piVar3 + 2) + (long)(iVar6 + iVar1)) = 0;
              }
              if (iVar6 != 0) {
                BIO_free_all(b);
                ERR_new();
                uVar11 = 0xc1;
                goto LAB_0060dcd8;
              }
              iVar6 = BIO_test_flags(b,8);
            } while (iVar6 != 0);
            BIO_free_all(b);
            if (pvVar7 != (void *)0x0) goto LAB_0060d8f0;
            ERR_new();
            ERR_set_debug("../crypto/x509/v3_pci.c",0xe1,"process_pci_value");
            uVar11 = 0xc0100;
          }
        }
        else {
          iVar6 = strncmp(pcVar2,"text:",5);
          if (iVar6 == 0) {
            local_850 = strlen(pcVar2 + 5);
            pvVar7 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),
                                    (int)local_850 + 1 + *(int *)*param_4,"../crypto/x509/v3_pci.c",
                                    199);
            if (pvVar7 != (void *)0x0) {
              piVar3 = (int *)*param_4;
              pcVar2 = param_1->value;
              *(void **)(piVar3 + 2) = pvVar7;
              memcpy((void *)((long)pvVar7 + (long)*piVar3),pcVar2 + 5,local_850);
              piVar3 = (int *)*param_4;
              iVar5 = *piVar3;
              *piVar3 = iVar5 + (int)local_850;
              *(undefined1 *)(*(long *)(piVar3 + 2) + (long)(iVar5 + (int)local_850)) = 0;
              goto LAB_0060d8f0;
            }
            CRYPTO_free(*(void **)(*param_4 + 8));
            puVar4 = (undefined4 *)*param_4;
            *(undefined8 *)(puVar4 + 2) = 0;
            *puVar4 = 0;
            ERR_new();
            ERR_set_debug("../crypto/x509/v3_pci.c",0xd7,"process_pci_value");
            uVar11 = 0xc0100;
          }
          else {
            ERR_new();
            ERR_set_debug("../crypto/x509/v3_pci.c",0xdc,"process_pci_value");
            uVar11 = 0x98;
          }
        }
LAB_0060d964:
        ERR_set_error(0x22,uVar11,0);
      }
      ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",
                         param_1->value);
LAB_0060d9a1:
      if (iVar5 != 0) {
        iVar5 = 0;
        ASN1_OCTET_STRING_free((ASN1_STRING *)*param_4);
        *param_4 = 0;
      }
      goto LAB_0060d75c;
    }
    if (*param_3 == (ASN1_INTEGER *)0x0) {
      iVar5 = X509V3_get_value_int(param_1,param_3);
      if (iVar5 != 0) goto LAB_0060d8f0;
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",0x6e,"process_pci_value");
      uVar11 = 0x9c;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_pci.c",0x68,"process_pci_value");
      uVar11 = 0x9d;
    }
  }
  iVar5 = 0;
  ERR_set_error(0x22,uVar11,0);
  ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",param_1->value);
LAB_0060d75c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

