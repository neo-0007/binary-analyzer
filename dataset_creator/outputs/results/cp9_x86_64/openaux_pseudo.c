
void openaux(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x31c) & 3;
  if ((*(byte *)(lVar2 + 0x31c) & 3) == 0) {
    bVar1 = 1;
  }
  lVar2 = _dl_map_object(lVar2,param_1[3],bVar1,(int)param_1[1],*(undefined4 *)((long)param_1 + 0xc)
                         ,*(undefined8 *)(lVar2 + 0x30));
  param_1[4] = lVar2;
  return;
}

