
undefined8 FUN_006163c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_60;
  int local_5c;
  char *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = FUN_004cdb50();
  lVar6 = FUN_004cca80(param_2,uVar5);
  local_60 = 0;
  if (lVar6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/asn1/asn_mstbl.c",0x1d,"stbl_module_init");
    FUN_0051f8f0(0xd,0xac,0);
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_00436480(lVar6);
    if (0 < iVar3) {
      do {
        lVar7 = FUN_004364a0(lVar6,local_60);
        local_48 = 0;
        uVar5 = *(undefined8 *)(lVar7 + 8);
        uVar2 = *(undefined8 *)(lVar7 + 0x10);
        local_5c = FUN_00424460(uVar5);
        if (((local_5c == 0) && (local_5c = FUN_00424390(uVar5), local_5c == 0)) ||
           (lVar7 = FUN_0059d500(uVar2), lVar7 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/asn_mstbl.c",0x67,"do_tcreate");
          FUN_0051f8f0(0xd,0xda,"name=%s, value=%s",uVar5,uVar2);
          FUN_00436430(0,FUN_0059cb40);
LAB_006165c5:
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/asn_mstbl.c",0x23,"stbl_module_init");
          FUN_0051f8f0(0xd,0xdb,0);
          uVar5 = 0;
          goto LAB_006165f3;
        }
        local_78 = 0;
        local_70 = 0xffffffffffffffff;
        local_80 = 0xffffffffffffffff;
        for (iVar3 = 0; iVar4 = FUN_00436480(lVar7), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          lVar8 = FUN_004364a0(lVar7,iVar3);
          uVar5 = *(undefined8 *)(lVar8 + 8);
          iVar4 = thunk_FUN_00712780(uVar5,&DAT_0081af6b);
          if (iVar4 == 0) {
            local_80 = FUN_006e9510(*(undefined8 *)(lVar8 + 0x10),&local_50,0);
            cVar1 = *local_50;
joined_r0x00616574:
            if (cVar1 != '\0') {
LAB_00616576:
              FUN_0051f420();
              FUN_0051f540("../crypto/asn1/asn_mstbl.c",100,"do_tcreate");
              FUN_0051f8f0(0xd,0xda,"field=%s, value=%s",*(undefined8 *)(lVar8 + 8),
                           *(undefined8 *)(lVar8 + 0x10));
              FUN_00436430(lVar7,FUN_0059cb40);
              goto LAB_006165c5;
            }
          }
          else {
            iVar4 = thunk_FUN_00712780(uVar5,"max");
            if (iVar4 == 0) {
              local_70 = FUN_006e9510(*(undefined8 *)(lVar8 + 0x10),&local_50,0);
              cVar1 = *local_50;
              goto joined_r0x00616574;
            }
            iVar4 = thunk_FUN_00712780(uVar5,"mask");
            if (iVar4 == 0) {
              iVar4 = FUN_006160f0(*(undefined8 *)(lVar8 + 0x10),&local_48);
              if ((iVar4 != 0) && (local_48 != 0)) goto LAB_00616520;
              goto LAB_00616576;
            }
            iVar4 = thunk_FUN_00712780(uVar5,"flags");
            if (iVar4 != 0) goto LAB_00616576;
            uVar5 = *(undefined8 *)(lVar8 + 0x10);
            iVar4 = thunk_FUN_00712780(uVar5,"nomask");
            if (iVar4 == 0) {
              local_78 = 2;
            }
            else {
              iVar4 = thunk_FUN_00712780(uVar5,&DAT_007dcef8);
              if (iVar4 != 0) goto LAB_00616576;
              local_78 = 1;
            }
          }
LAB_00616520:
        }
        iVar3 = FUN_004a0e80(local_5c,local_80,local_70,local_48,local_78);
        if (iVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/asn_mstbl.c",0x6d,"do_tcreate");
          FUN_0051f8f0(0xd,0xc0100,0);
          FUN_00436430(lVar7,FUN_0059cb40);
          goto LAB_006165c5;
        }
        FUN_00436430(lVar7,FUN_0059cb40);
        local_60 = local_60 + 1;
        iVar3 = FUN_00436480(lVar6);
      } while (local_60 < iVar3);
    }
    uVar5 = 1;
  }
LAB_006165f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

