
int FUN_004abe60(long param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (param_2 == (char *)0x0) {
    FUN_0051f420();
    uVar6 = 0x1fb;
  }
  else {
    if (param_3 < 1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_lib.c",0x1ff,"BIO_get_line");
      FUN_0051f8f0(0x20,0x7d,0);
      return -1;
    }
    *param_2 = '\0';
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_lib.c",0x209,"BIO_get_line");
        FUN_0051f8f0(0x20,0x78,0);
        return -1;
      }
      iVar2 = 0;
      pcVar5 = param_2;
      do {
        pcVar4 = pcVar5;
        if (pcVar5 == param_2 + (param_3 - 1)) {
          *pcVar5 = '\0';
          if (iVar2 == 0) {
LAB_004abefb:
            iVar3 = FUN_004abd40(param_1,2,0,0);
            if (iVar3 == 0) {
              return iVar2;
            }
          }
          goto LAB_004abede;
        }
        iVar2 = FUN_004ab770(param_1,pcVar5,1);
        if (iVar2 < 1) {
          *pcVar5 = '\0';
          goto LAB_004abefb;
        }
        pcVar4 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar4;
      } while (cVar1 != '\n');
      *pcVar4 = '\0';
LAB_004abede:
      return (int)pcVar4 - (int)param_2;
    }
    FUN_0051f420();
    uVar6 = 0x205;
  }
  FUN_0051f540("../crypto/bio/bio_lib.c",uVar6,"BIO_get_line");
  FUN_0051f8f0(0x20,0xc0102,0);
  return -1;
}

