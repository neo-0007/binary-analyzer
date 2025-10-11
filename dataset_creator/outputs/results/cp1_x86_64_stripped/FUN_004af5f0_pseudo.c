
int FUN_004af5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004aec60();
  if (iVar1 == 1) {
    iVar1 = FUN_00771200(param_1,param_2,param_3);
    if (iVar1 == -1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0x32,"BIO_socket");
      puVar2 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar2,"calling socket()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock2.c",0x34,"BIO_socket");
      FUN_0051f8f0(0x20,0x76,0);
    }
    else {
      FUN_00771190(iVar1,6,0x1f,"tls",4);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

