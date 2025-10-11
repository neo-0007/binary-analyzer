
int BIO_get_line(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *data;
  undefined8 uVar5;
  
  if (param_2 == (char *)0x0) {
    ERR_new();
    uVar5 = 0x1fb;
  }
  else {
    if (param_3 < 1) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_lib.c",0x1ff,"BIO_get_line");
      ERR_set_error(0x20,0x7d,0);
      return -1;
    }
    *param_2 = '\0';
    if (param_1 != (BIO *)0x0) {
      if (param_1->num == 0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_lib.c",0x209,"BIO_get_line");
        ERR_set_error(0x20,0x78,0);
        return -1;
      }
      iVar2 = 0;
      data = param_2;
      do {
        pcVar4 = data;
        if (data == param_2 + (param_3 - 1)) {
          *data = '\0';
          if (iVar2 == 0) {
LAB_004a8e7b:
            lVar3 = BIO_ctrl(param_1,2,0,(void *)0x0);
            if ((int)lVar3 == 0) {
              return iVar2;
            }
          }
          goto LAB_004a8e5e;
        }
        iVar2 = BIO_read(param_1,data,1);
        if (iVar2 < 1) {
          *data = '\0';
          goto LAB_004a8e7b;
        }
        pcVar4 = data + 1;
        cVar1 = *data;
        data = pcVar4;
      } while (cVar1 != '\n');
      *pcVar4 = '\0';
LAB_004a8e5e:
      return (int)pcVar4 - (int)param_2;
    }
    ERR_new();
    uVar5 = 0x205;
  }
  ERR_set_debug("../crypto/bio/bio_lib.c",uVar5,"BIO_get_line");
  ERR_set_error(0x20,0xc0102,0);
  return -1;
}

