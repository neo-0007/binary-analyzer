
int FUN_006109a0(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  long local_850;
  undefined1 local_848 [2056];
  long local_40;
  
  uVar8 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = thunk_FUN_00712780(uVar8,"language");
  if (iVar4 == 0) {
    if (*param_2 == 0) {
      lVar6 = FUN_00424530(param_1[2],0);
      *param_2 = lVar6;
      if (lVar6 != 0) goto LAB_00610bf0;
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_pci.c",0x62,"process_pci_value");
      uVar8 = 0x6e;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_pci.c",0x5d,"process_pci_value");
      uVar8 = 0x9b;
    }
  }
  else {
    iVar4 = thunk_FUN_00712780(uVar8,"pathlen");
    if (iVar4 != 0) {
      iVar4 = thunk_FUN_00712780(uVar8,"policy");
      if (iVar4 != 0) {
LAB_00610bf0:
        iVar4 = 1;
        goto LAB_00610a5c;
      }
      iVar4 = 0;
      if (*param_4 == 0) {
        lVar6 = FUN_004a7670();
        iVar4 = 1;
        *param_4 = lVar6;
        if (lVar6 == 0) {
          FUN_0051f420();
          iVar4 = 0;
          FUN_0051f540("../crypto/x509/v3_pci.c",0x79,"process_pci_value");
          FUN_0051f8f0(0x22,0xc0100,0);
          FUN_0051ef40(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
          goto LAB_00610a5c;
        }
      }
      lVar6 = param_1[2];
      iVar5 = thunk_FUN_00712ab0(lVar6,&DAT_0081b9fd,4);
      if (iVar5 == 0) {
        lVar6 = FUN_0041c870(lVar6 + 4,&local_850);
        if (lVar6 != 0) {
          lVar7 = FUN_0041ade0(*(undefined8 *)((int *)*param_4 + 2),*(int *)*param_4 + local_850 + 1
                               ,"../crypto/x509/v3_pci.c",0x88);
          if (lVar7 != 0) {
            piVar2 = (int *)*param_4;
            *(long *)(piVar2 + 2) = lVar7;
            thunk_FUN_00713a50(lVar7 + *piVar2,lVar6,local_850);
            piVar2 = (int *)*param_4;
            iVar4 = *piVar2;
            *piVar2 = iVar4 + (int)local_850;
            *(undefined1 *)(*(long *)(piVar2 + 2) + (long)(iVar4 + (int)local_850)) = 0;
            FUN_0041ad60(lVar6,"../crypto/x509/v3_pci.c",0x9d);
            goto LAB_00610bf0;
          }
          FUN_0041ad60(lVar6,"../crypto/x509/v3_pci.c",0x91);
          FUN_0041ad60(*(undefined8 *)(*param_4 + 8),"../crypto/x509/v3_pci.c",0x96);
          puVar3 = (undefined4 *)*param_4;
          *(undefined8 *)(puVar3 + 2) = 0;
          *puVar3 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_pci.c",0x99,"process_pci_value");
          uVar8 = 0xc0100;
          goto LAB_00610c64;
        }
      }
      else {
        iVar5 = thunk_FUN_00712ab0(lVar6,"file:",5);
        if (iVar5 == 0) {
          lVar7 = 0;
          lVar6 = FUN_004b0b90(lVar6 + 5,"r");
          if (lVar6 == 0) {
            FUN_0051f420();
            uVar8 = 0xa3;
LAB_00610fd8:
            FUN_0051f540("../crypto/x509/v3_pci.c",uVar8,"process_pci_value");
            uVar8 = 0x80020;
          }
          else {
            do {
              while( true ) {
                iVar5 = FUN_004ab770(lVar6,local_848,0x800);
                if (iVar5 < 1) break;
                lVar7 = FUN_0041ade0(*(undefined8 *)((int *)*param_4 + 2),
                                     (long)(iVar5 + *(int *)*param_4 + 1),"../crypto/x509/v3_pci.c",
                                     0xac);
                piVar2 = (int *)*param_4;
                if (lVar7 == 0) {
                  FUN_0041ad60(*(undefined8 *)(piVar2 + 2),"../crypto/x509/v3_pci.c",0xb0);
                  puVar3 = (undefined4 *)*param_4;
                  *(undefined8 *)(puVar3 + 2) = 0;
                  *puVar3 = 0;
                  FUN_0051f420();
                  FUN_0051f540("../crypto/x509/v3_pci.c",0xb3,"process_pci_value");
                  FUN_0051f8f0(0x22,0xc0100,0);
                  FUN_0051ef40(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
                  FUN_004ac4a0(lVar6);
                  goto LAB_00610ca1;
                }
                *(long *)(piVar2 + 2) = lVar7;
                thunk_FUN_00713a50(*piVar2 + lVar7,local_848,(long)iVar5);
                piVar2 = (int *)*param_4;
                iVar1 = *piVar2;
                *piVar2 = iVar5 + iVar1;
                *(undefined1 *)(*(long *)(piVar2 + 2) + (long)(iVar5 + iVar1)) = 0;
              }
              if (iVar5 != 0) {
                FUN_004ac4a0(lVar6);
                FUN_0051f420();
                uVar8 = 0xc1;
                goto LAB_00610fd8;
              }
              iVar5 = FUN_004ab6d0(lVar6,8);
            } while (iVar5 != 0);
            FUN_004ac4a0(lVar6);
            if (lVar7 != 0) goto LAB_00610bf0;
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/v3_pci.c",0xe1,"process_pci_value");
            uVar8 = 0xc0100;
          }
        }
        else {
          iVar5 = thunk_FUN_00712ab0(lVar6,"text:",5);
          if (iVar5 == 0) {
            local_850 = thunk_FUN_007129d0(lVar6 + 5);
            lVar6 = FUN_0041ade0(*(undefined8 *)((int *)*param_4 + 2),
                                 local_850 + 1 + (long)*(int *)*param_4,"../crypto/x509/v3_pci.c",
                                 199);
            if (lVar6 != 0) {
              piVar2 = (int *)*param_4;
              lVar7 = param_1[2];
              *(long *)(piVar2 + 2) = lVar6;
              thunk_FUN_00713a50(lVar6 + *piVar2,lVar7 + 5,local_850);
              piVar2 = (int *)*param_4;
              iVar4 = *piVar2;
              *piVar2 = iVar4 + (int)local_850;
              *(undefined1 *)(*(long *)(piVar2 + 2) + (long)(iVar4 + (int)local_850)) = 0;
              goto LAB_00610bf0;
            }
            FUN_0041ad60(*(undefined8 *)(*param_4 + 8),"../crypto/x509/v3_pci.c",0xd4);
            puVar3 = (undefined4 *)*param_4;
            *(undefined8 *)(puVar3 + 2) = 0;
            *puVar3 = 0;
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/v3_pci.c",0xd7,"process_pci_value");
            uVar8 = 0xc0100;
          }
          else {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/v3_pci.c",0xdc,"process_pci_value");
            uVar8 = 0x98;
          }
        }
LAB_00610c64:
        FUN_0051f8f0(0x22,uVar8,0);
      }
      FUN_0051ef40(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
LAB_00610ca1:
      if (iVar4 != 0) {
        iVar4 = 0;
        thunk_FUN_004a2270(*param_4);
        *param_4 = 0;
      }
      goto LAB_00610a5c;
    }
    if (*param_3 == 0) {
      iVar4 = FUN_0059d4a0(param_1,param_3);
      if (iVar4 != 0) goto LAB_00610bf0;
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_pci.c",0x6e,"process_pci_value");
      uVar8 = 0x9c;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_pci.c",0x68,"process_pci_value");
      uVar8 = 0x9d;
    }
  }
  iVar4 = 0;
  FUN_0051f8f0(0x22,uVar8,0);
  FUN_0051ef40(6,"section:",*param_1,",name:",param_1[1],",value:",param_1[2]);
LAB_00610a5c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

