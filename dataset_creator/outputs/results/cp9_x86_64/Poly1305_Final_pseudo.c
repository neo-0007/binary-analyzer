
void Poly1305_Final(void *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  
  lVar1 = *(long *)((long)param_1 + 0xe0);
  pcVar2 = *(code **)((long)param_1 + 0xf0);
  if (lVar1 != 0) {
    pcVar3 = *(code **)((long)param_1 + 0xe8);
    *(undefined1 *)((long)param_1 + lVar1 + 0xd0) = 1;
    if (lVar1 + 1U < 0x10) {
      memset((void *)((long)param_1 + lVar1 + 0xd1),0,0xf - lVar1);
    }
    (*pcVar3)(param_1,(long)param_1 + 0xd0,0x10,0);
  }
  (*pcVar2)(param_1,param_2,(long)param_1 + 0xc0);
  OPENSSL_cleanse(param_1,0xf8);
  return;
}

