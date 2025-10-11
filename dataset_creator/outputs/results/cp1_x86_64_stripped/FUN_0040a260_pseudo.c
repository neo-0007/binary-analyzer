
int FUN_0040a260(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_0040a250();
  if (iVar1 != 0x1a5) {
    if (iVar1 < 0x1a6) {
      if (iVar1 == 0x3d) {
switchD_0040a2dd_caseD_290:
        return 0x1e;
      }
      if (iVar1 < 0x3e) {
        if ((iVar1 != 0x1e) && (iVar1 != 0x25)) {
          if (iVar1 == 5) {
            return 5;
          }
          goto LAB_0040a306;
        }
      }
      else if ((iVar1 == 0x62) || (iVar1 == 0xa6)) {
        iVar1 = 0x25;
      }
      else {
        if (iVar1 != 0x61) goto LAB_0040a306;
        iVar1 = 5;
      }
    }
    else {
      if (0x293 < iVar1) {
LAB_0040a306:
        uVar2 = FUN_004239c0(iVar1);
        lVar3 = FUN_00424a20(uVar2);
        if (lVar3 == 0) {
          iVar1 = 0;
        }
        FUN_004a06b0(uVar2);
        return iVar1;
      }
      if (iVar1 < 0x28a) {
        if ((iVar1 != 0x1a9) && (iVar1 != 0x1ad)) goto LAB_0040a306;
      }
      else {
        switch(iVar1) {
        case 0x28b:
        case 0x28e:
          iVar1 = 0x1a9;
          break;
        case 0x28c:
        case 0x28f:
          iVar1 = 0x1ad;
          break;
        default:
          iVar1 = 0x1a5;
          break;
        case 0x290:
        case 0x291:
        case 0x292:
        case 0x293:
          goto switchD_0040a2dd_caseD_290;
        }
      }
    }
  }
  return iVar1;
}

