
undefined4
FUN_00557180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar2 = param_8 & 1;
  local_68 = 0;
  uVar7 = 0;
LAB_00557231:
  do {
    while( true ) {
      while( true ) {
        if (uVar2 == 0) {
          FUN_0041ad60(uVar7,"../crypto/pem/pem_lib.c",0xe2);
          FUN_0041ad60(local_78,"../crypto/pem/pem_lib.c",0xe2);
          FUN_0041ad60(local_70,"../crypto/pem/pem_lib.c",0xe2);
        }
        else {
          FUN_0041c0b0(uVar7,0,"../crypto/pem/pem_lib.c",0xe0);
          FUN_0041c0b0(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          FUN_0041c0b0(local_70,local_68,"../crypto/pem/pem_lib.c",0xe0);
        }
        iVar3 = FUN_005564f0(param_5,&local_80,&local_78,&local_70,&local_68,param_8);
        uVar1 = local_80;
        if (iVar3 == 0) {
          uVar5 = FUN_0051e920();
          uVar2 = uVar5 & 0x7fffffff;
          if ((uVar5 & 0x80000000) == 0) {
            uVar2 = uVar5 & 0x7fffff;
          }
          uVar8 = 0;
          if (uVar2 == 0x6c) {
            FUN_0051ef40(2,"Expecting: ",param_4);
          }
          goto LAB_00557368;
        }
        iVar3 = thunk_FUN_00712780(local_80,param_4);
        if (iVar3 == 0) goto LAB_005572f8;
        iVar3 = thunk_FUN_00712780(param_4,"ANY PRIVATE KEY");
        if (iVar3 != 0) break;
        iVar3 = thunk_FUN_00712780(uVar1,"ENCRYPTED PRIVATE KEY");
        if (((iVar3 == 0) || (iVar3 = thunk_FUN_00712780(uVar1,"PRIVATE KEY"), iVar3 == 0)) ||
           ((iVar3 = FUN_00557110(uVar1,"PRIVATE KEY"), uVar7 = local_80, 0 < iVar3 &&
            ((lVar6 = FUN_004a14a0(0,uVar1,iVar3), uVar7 = local_80, lVar6 != 0 &&
             (*(long *)(lVar6 + 0xb8) != 0)))))) goto LAB_005572f8;
      }
      iVar3 = thunk_FUN_00712780(param_4,"PARAMETERS");
      if (iVar3 != 0) break;
      iVar3 = FUN_00557110(uVar1,"PARAMETERS");
      uVar7 = local_80;
      if ((0 < iVar3) && (lVar6 = FUN_004a14a0(&local_60,uVar1,iVar3), uVar7 = local_80, lVar6 != 0)
         ) {
        if (*(long *)(lVar6 + 0x70) != 0) {
          FUN_0051a270(local_60);
          goto LAB_005572f8;
        }
        FUN_0051a270(local_60);
        uVar7 = local_80;
      }
    }
    iVar3 = thunk_FUN_00712780(uVar1,"X9.42 DH PARAMETERS");
    if ((((iVar3 == 0) && (iVar3 = thunk_FUN_00712780(param_4,"DH PARAMETERS"), iVar3 == 0)) ||
        ((iVar3 = thunk_FUN_00712780(uVar1,"X509 CERTIFICATE"), iVar3 == 0 &&
         (iVar4 = thunk_FUN_00712780(param_4,"CERTIFICATE"), iVar4 == 0)))) ||
       ((iVar4 = thunk_FUN_00712780(uVar1,"NEW CERTIFICATE REQUEST"), iVar4 == 0 &&
        (iVar4 = thunk_FUN_00712780(param_4,"CERTIFICATE REQUEST"), iVar4 == 0))))
    goto LAB_005572f8;
    iVar4 = thunk_FUN_00712780(uVar1,"CERTIFICATE");
    uVar7 = uVar1;
    if (iVar4 == 0) {
      iVar3 = thunk_FUN_00712780(param_4,"TRUSTED CERTIFICATE");
      if ((iVar3 == 0) || (iVar3 = thunk_FUN_00712780(param_4,"PKCS7"), iVar3 == 0))
      goto LAB_005572f8;
    }
    else {
      if (((iVar3 == 0) && (iVar3 = thunk_FUN_00712780(param_4,"TRUSTED CERTIFICATE"), iVar3 == 0))
         || ((iVar3 = thunk_FUN_00712780(uVar1,"PKCS #7 SIGNED DATA"), iVar3 == 0 &&
             (iVar3 = thunk_FUN_00712780(param_4), iVar3 == 0)))) goto LAB_005572f8;
      iVar3 = thunk_FUN_00712780(uVar1,"PKCS7");
      if (iVar3 != 0) goto LAB_00557231;
    }
    iVar3 = thunk_FUN_00712780(param_4,&DAT_00806cfe);
    if (iVar3 == 0) {
LAB_005572f8:
      iVar3 = FUN_00555740(local_78,local_58);
      if ((iVar3 == 0) ||
         (iVar3 = FUN_005554c0(local_58,local_70,&local_68,param_6,param_7), iVar3 == 0)) {
        if (uVar2 == 0) {
          uVar8 = 0;
          FUN_0041ad60(local_80,"../crypto/pem/pem_lib.c",0xe2);
          FUN_0041ad60(local_78,"../crypto/pem/pem_lib.c",0xe2);
          FUN_0041ad60(local_70,"../crypto/pem/pem_lib.c",0xe2);
        }
        else {
          uVar8 = 0;
          FUN_0041c0b0(local_80,0,"../crypto/pem/pem_lib.c",0xe0);
          FUN_0041c0b0(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          FUN_0041c0b0(local_70,local_68,"../crypto/pem/pem_lib.c",0xe0);
        }
      }
      else {
        *param_1 = local_70;
        *param_2 = local_68;
        if (param_3 == (undefined8 *)0x0) {
          if (uVar2 == 0) {
            uVar8 = 1;
            FUN_0041ad60(local_80,"../crypto/pem/pem_lib.c",0xe2);
            FUN_0041ad60(local_78,"../crypto/pem/pem_lib.c",0xe2);
          }
          else {
            uVar8 = 1;
            FUN_0041c0b0(local_80,0,"../crypto/pem/pem_lib.c",0xe0);
            FUN_0041c0b0(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          }
        }
        else {
          *param_3 = local_80;
          if (uVar2 == 0) {
            uVar8 = 1;
            FUN_0041ad60(local_78,"../crypto/pem/pem_lib.c",0xe2);
          }
          else {
            uVar8 = 1;
            FUN_0041c0b0(local_78,0,"../crypto/pem/pem_lib.c",0xe0);
          }
        }
      }
LAB_00557368:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar8;
    }
  } while( true );
}

