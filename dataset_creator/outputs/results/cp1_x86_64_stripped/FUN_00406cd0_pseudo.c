
undefined8 FUN_00406cd0(undefined8 *param_1,int *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    if ((iVar2 == 0x10) || (iVar2 == 0x80)) {
      if (*(long *)(piVar4 + 0xc) != 0) {
        if (iVar2 == 0x80) {
          uVar3 = FUN_0040cab0(param_1,0,param_2,param_4,0);
          return uVar3;
        }
        goto LAB_00406e9e;
      }
    }
    else if ((((iVar2 - 0x20U & 0xffffffdf) == 0) || (iVar2 == 0x100)) &&
            (*(long *)(piVar4 + 0xc) != 0)) {
LAB_00406e9e:
      if (iVar2 == 0x100) {
        uVar3 = FUN_0040cb10(param_1,0,param_2,param_4,0);
        return uVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/digest.c",0xa5,"evp_md_init_internal");
      FUN_0051f8f0(6,0xbd,0);
      return 0;
    }
  }
  FUN_0040b0d0(param_1,2);
  if (param_1[7] != 0) {
    if (param_1[1] == 0) {
      FUN_0051f420();
      uVar3 = 0xae;
      goto LAB_004071a1;
    }
    pcVar1 = *(code **)(param_1[1] + 0xb0);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    param_1[7] = 0;
  }
  if (param_2 == (int *)0x0) {
    piVar4 = (int *)param_1[1];
    if (piVar4 == (int *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/digest.c",0xba,"evp_md_init_internal");
      FUN_0051f8f0(6,0x8b,0);
      return 0;
    }
    param_2 = piVar4;
    if (param_1[2] != 0) goto LAB_00406d80;
LAB_00406d8c:
    FUN_0051a270();
    param_1[2] = 0;
    if (param_4 == 0) {
      lVar5 = FUN_0051cf90(*param_2);
      if (param_1[2] == 0) {
        if (lVar5 != 0) {
          if (param_1[1] == param_1[8]) goto LAB_0040738f;
          FUN_00406a50();
          param_1[8] = 0;
          goto LAB_00406dd0;
        }
        if (((*(byte *)((long)param_1 + 0x19) & 1) != 0) || (param_2[6] == 2)) {
          if (param_1[1] == param_1[8]) {
            param_1[1] = 0;
            FUN_00406a50();
            param_1[8] = 0;
          }
          else {
            FUN_00406a50();
            param_1[8] = 0;
          }
          goto LAB_00406de8;
        }
        FUN_00405e60(param_1,1);
        if (*(long *)(param_2 + 0x1c) == 0) {
          pcVar6 = "NULL";
          if (*param_2 != 0) {
            pcVar6 = (char *)FUN_00423b00(*param_2,"NULL");
          }
          param_2 = (int *)FUN_004069d0(0,pcVar6,&DAT_0083e5c2);
          if (param_2 == (int *)0x0) {
            FUN_0051f420();
            uVar3 = 0xfe;
            goto LAB_004071a1;
          }
          FUN_00406a50(param_1[8]);
          param_1[8] = param_2;
          if (((param_1[7] != 0) && (piVar4 = (int *)param_1[1], piVar4 != param_2)) &&
             (piVar4 != (int *)0x0)) goto LAB_00407037;
LAB_0040704d:
          if (*(long *)(param_2 + 0x1c) != 0) goto LAB_004071d0;
        }
        else {
          if (((param_1[7] != 0) && (piVar4 = (int *)param_1[1], piVar4 != (int *)0x0)) &&
             (piVar4 != param_2)) {
LAB_00407037:
            if (*(code **)(piVar4 + 0x2c) != (code *)0x0) {
              (**(code **)(piVar4 + 0x2c))();
            }
            param_1[7] = 0;
            goto LAB_0040704d;
          }
LAB_004071d0:
          if ((int *)param_1[8] != param_2) {
            iVar2 = FUN_00406a10(param_2);
            if (iVar2 == 0) {
              FUN_0051f420();
              uVar3 = 0x10e;
LAB_00407169:
              FUN_0051f540("../crypto/evp/digest.c",uVar3,"evp_md_init_internal");
              FUN_0051f8f0(6,0x86,0);
              return 0;
            }
            FUN_00406a50(param_1[8]);
            param_1[8] = param_2;
          }
        }
        param_1[1] = param_2;
        if (param_1[7] == 0) {
          pcVar1 = *(code **)(param_2 + 0x22);
          uVar3 = FUN_00420b60(*(undefined8 *)(param_2 + 0x1c));
          lVar5 = (*pcVar1)(uVar3);
          param_1[7] = lVar5;
          if (lVar5 == 0) {
            FUN_0051f420();
            uVar3 = 0x118;
            goto LAB_004071a1;
          }
          param_2 = (int *)param_1[1];
        }
        if (*(code **)(param_2 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040708d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(param_2 + 0x24))(param_1[7],param_3);
          return uVar3;
        }
        FUN_0051f420();
        uVar3 = 0x11e;
LAB_004071a1:
        FUN_0051f540("../crypto/evp/digest.c",uVar3,"evp_md_init_internal");
        FUN_0051f8f0(6,0x86,0);
        return 0;
      }
      if (param_1[1] == param_1[8]) {
LAB_0040738f:
        param_1[1] = 0;
        FUN_00406a50();
        param_1[8] = 0;
      }
      else {
        FUN_00406a50();
        param_1[8] = 0;
      }
      if (lVar5 != 0) goto LAB_00406dd0;
    }
    else {
      if (param_1[1] == param_1[8]) {
        param_1[1] = 0;
        FUN_00406a50();
        param_1[8] = 0;
      }
      else {
        FUN_00406a50();
        param_1[8] = 0;
      }
      iVar2 = FUN_0051a180(param_4);
      lVar5 = param_4;
      if (iVar2 == 0) {
        FUN_0051f420();
        uVar3 = 299;
        goto LAB_00407169;
      }
LAB_00406dd0:
      param_2 = (int *)FUN_0051cfc0(lVar5,*param_2);
      param_4 = lVar5;
      if (param_2 == (int *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/digest.c",0x137,"evp_md_init_internal");
        FUN_0051f8f0(6,0x86,0);
        FUN_0051a270(lVar5);
        return 0;
      }
    }
LAB_00406de8:
    param_1[2] = param_4;
    if ((int *)param_1[1] == param_2) goto LAB_00406ef0;
    FUN_00405e60(param_1,1);
    param_1[1] = param_2;
    if ((*(byte *)((long)param_1 + 0x19) & 1) == 0) {
      iVar2 = param_2[0x13];
      if (iVar2 != 0) {
        param_1[6] = *(undefined8 *)(param_2 + 10);
        lVar5 = FUN_0041aec0((long)iVar2,"../crypto/evp/digest.c",0x14c);
        param_1[4] = lVar5;
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/digest.c",0x14e,"evp_md_init_internal");
          FUN_0051f8f0(6,0xc0100,0);
          return 0;
        }
        goto LAB_00406ef0;
      }
      piVar4 = (int *)param_1[5];
      if (piVar4 == (int *)0x0) goto LAB_00406e6c;
    }
    else {
      piVar4 = (int *)param_1[5];
      if (piVar4 == (int *)0x0) {
        return 1;
      }
    }
LAB_00406e30:
    iVar2 = *piVar4;
    if (((((iVar2 - 0x10U & 0xffffffef) != 0 && (iVar2 - 0x40U & 0xffffffbf) != 0) &&
         (iVar2 != 0x100)) || (*(long *)(piVar4 + 10) == 0)) &&
       ((iVar2 = FUN_00414800(piVar4,0xffffffff,0x1f0,7,0,param_1), iVar2 < 1 && (iVar2 != -2)))) {
      return 0;
    }
  }
  else {
    *param_1 = param_2;
    if ((param_1[2] == 0) || (piVar4 = (int *)param_1[1], piVar4 == (int *)0x0)) goto LAB_00406d8c;
LAB_00406d80:
    if (*param_2 != *piVar4) goto LAB_00406d8c;
LAB_00406ef0:
    piVar4 = (int *)param_1[5];
    if (piVar4 != (int *)0x0) goto LAB_00406e30;
  }
  if ((*(byte *)((long)param_1 + 0x19) & 1) != 0) {
    return 1;
  }
  param_2 = (int *)param_1[1];
LAB_00406e6c:
                    /* WARNING: Could not recover jumptable at 0x00406e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(param_2 + 8))(param_1);
  return uVar3;
}

