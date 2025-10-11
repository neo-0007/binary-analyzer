
undefined8 FUN_005bfe40(char *param_1,long *param_2,long *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (*param_1 == '[') {
    lVar1 = thunk_FUN_00712710(param_1,0x5d);
    if (lVar1 == 0) goto LAB_005bfeb9;
    pcVar4 = param_1 + 1;
    lVar2 = lVar1 - (long)pcVar4;
    if (*(char *)(lVar1 + 1) == '\0') goto LAB_005bff90;
    if (*(char *)(lVar1 + 1) != ':') goto LAB_005bfeb9;
    lVar3 = thunk_FUN_007129d0((char *)(lVar1 + 2));
    param_1 = (char *)(lVar1 + 2);
LAB_005bfea3:
    lVar1 = thunk_FUN_00712710(param_1,0x3a);
    if (lVar1 != 0) {
LAB_005bfeb9:
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_addr.c",0x230,"BIO_parse_hostserv");
      FUN_0051f8f0(0x20,0x82,0);
      return 0;
    }
    if (param_2 != (long *)0x0) {
LAB_005bff9d:
      if ((lVar2 == 0) || ((lVar2 == 1 && (*pcVar4 == '*')))) {
        *param_2 = 0;
      }
      else {
        lVar1 = FUN_0041c400(pcVar4,lVar2,"../crypto/bio/bio_addr.c",0x21b);
        *param_2 = lVar1;
        if (lVar1 == 0) goto LAB_005c00a0;
      }
    }
  }
  else {
    lVar1 = thunk_FUN_00712bd0(param_1,0x3a);
    lVar2 = thunk_FUN_00712710(param_1,0x3a);
    if (lVar1 != lVar2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_addr.c",0x22d,"BIO_parse_hostserv");
      FUN_0051f8f0(0x20,0x81,0);
      return 0;
    }
    pcVar4 = param_1;
    if (lVar1 != 0) {
      lVar2 = lVar1 - (long)param_1;
      lVar3 = thunk_FUN_007129d0((char *)(lVar1 + 1));
      param_1 = (char *)(lVar1 + 1);
      goto LAB_005bfea3;
    }
    lVar3 = thunk_FUN_007129d0(param_1);
    lVar2 = lVar3;
    if (param_4 == 0) {
LAB_005bff90:
      if (param_2 == (long *)0x0) {
        return 1;
      }
      lVar3 = 0;
      param_1 = (char *)0x0;
      goto LAB_005bff9d;
    }
  }
  if ((param_1 == (char *)0x0) || (param_3 == (long *)0x0)) {
    return 1;
  }
  if ((lVar3 == 0) || ((lVar3 == 1 && (*param_1 == '*')))) {
    *param_3 = 0;
    return 1;
  }
  lVar1 = FUN_0041c400(param_1,lVar3,"../crypto/bio/bio_addr.c",0x225);
  *param_3 = lVar1;
  if (lVar1 != 0) {
    return 1;
  }
LAB_005c00a0:
  FUN_0051f420();
  FUN_0051f540("../crypto/bio/bio_addr.c",0x233,"BIO_parse_hostserv");
  FUN_0051f8f0(0x20,0xc0100,0);
  return 0;
}

