
uint FUN_00568970(undefined8 param_1,int param_2,long *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  iVar1 = FUN_004abce0(param_1,param_4,0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (long *)0x0) {
        pcVar4 = "(INVALID PSS PARAMETERS)\n";
LAB_00568c47:
        iVar1 = FUN_004ab870(param_1,pcVar4);
        return (uint)(0 < iVar1);
      }
      iVar1 = FUN_004ab870(param_1,&DAT_008243ea);
    }
    else {
      pcVar4 = "No PSS parameter restrictions\n";
      if (param_3 == (long *)0x0) goto LAB_00568c47;
      iVar1 = FUN_004ab870(param_1,"PSS parameter restrictions:");
      if (iVar1 < 1) {
        return 0;
      }
      param_4 = param_4 + 2;
      iVar1 = FUN_004ab870(param_1,&DAT_008243ea);
    }
    if (((0 < iVar1) && (iVar1 = FUN_004abce0(param_1,param_4,0x80), iVar1 != 0)) &&
       (iVar1 = FUN_004ab870(param_1,"Hash Algorithm: "), 0 < iVar1)) {
      if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
        iVar1 = FUN_004ab870(param_1,"sha1 (default)");
      }
      else {
        iVar1 = FUN_004a0450(param_1,*(undefined8 *)*param_3);
      }
      if (((0 < iVar1) && (iVar1 = FUN_004ab870(param_1,&DAT_008243ea), 0 < iVar1)) &&
         ((iVar1 = FUN_004abce0(param_1,param_4,0x80), iVar1 != 0 &&
          (iVar1 = FUN_004ab870(param_1,"Mask Algorithm: "), 0 < iVar1)))) {
        if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
          iVar1 = FUN_004ab870(param_1,"mgf1 with sha1 (default)");
joined_r0x00568cac:
          if (0 < iVar1) {
            puVar3 = (undefined8 *)0x0;
LAB_00568b1a:
            FUN_004ab870(param_1,&DAT_008243ea);
            uVar2 = FUN_004abce0(param_1,param_4,0x80);
            if (uVar2 != 0) {
              pcVar4 = "Minimum";
              if (param_2 == 0) {
                pcVar4 = "";
              }
              iVar1 = FUN_004ae9e0(param_1,"%s Salt Length: 0x",pcVar4);
              uVar2 = 0;
              if (0 < iVar1) {
                if (param_3[2] == 0) {
                  iVar1 = FUN_004ab870(param_1,"14 (default)");
                }
                else {
                  iVar1 = FUN_005baa80(param_1);
                }
                uVar2 = 0;
                if (0 < iVar1) {
                  FUN_004ab870(param_1,&DAT_008243ea);
                  uVar2 = FUN_004abce0(param_1,param_4,0x80);
                  if (uVar2 != 0) {
                    uVar2 = 0;
                    iVar1 = FUN_004ab870(param_1,"Trailer Field: 0x");
                    if (0 < iVar1) {
                      if (param_3[3] == 0) {
                        iVar1 = FUN_004ab870(param_1,"01 (default)");
                      }
                      else {
                        iVar1 = FUN_005baa80(param_1);
                      }
                      if (0 < iVar1) {
                        uVar2 = 1;
                        FUN_004ab870(param_1,&DAT_008243ea);
                      }
                    }
                  }
                }
              }
            }
            goto LAB_005689f7;
          }
        }
        else {
          iVar1 = FUN_004a0450(param_1,*(undefined8 *)param_3[1]);
          if ((0 < iVar1) && (iVar1 = FUN_004ab870(param_1," with "), 0 < iVar1)) {
            puVar3 = (undefined8 *)FUN_004a8ba0(param_3[1]);
            if (puVar3 == (undefined8 *)0x0) {
              iVar1 = FUN_004ab870(param_1,"INVALID");
              goto joined_r0x00568cac;
            }
            iVar1 = FUN_004a0450(param_1,*puVar3);
            uVar2 = 0;
            if (iVar1 < 1) goto LAB_005689f7;
            goto LAB_00568b1a;
          }
        }
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
  uVar2 = 0;
LAB_005689f7:
  FUN_004a87e0(puVar3);
  return uVar2;
}

