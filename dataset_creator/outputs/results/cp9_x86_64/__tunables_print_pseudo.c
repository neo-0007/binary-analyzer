
void __tunables_print(void)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = "glibc.rtld.nns";
  do {
    if ((*(int *)(pcVar2 + 0x30) == 3) && (*(long *)(pcVar2 + 0x48) == 0)) {
      _dl_printf(&DAT_0080019f,pcVar2);
    }
    else {
      _dl_printf("%s: ",pcVar2);
      uVar1 = *(uint *)(pcVar2 + 0x30);
      if (uVar1 == 2) {
        _dl_printf("0x%Zx (min: 0x%Zx, max: 0x%Zx)\n",*(undefined8 *)(pcVar2 + 0x48),
                   *(undefined8 *)(pcVar2 + 0x38),*(undefined8 *)(pcVar2 + 0x40));
      }
      else if (uVar1 < 3) {
        if (uVar1 == 0) {
          _dl_printf("%d (min: %d, max: %d)\n",*(undefined4 *)(pcVar2 + 0x48),
                     *(undefined4 *)(pcVar2 + 0x38),*(undefined4 *)(pcVar2 + 0x40));
        }
        else {
          _dl_printf("0x%lx (min: 0x%lx, max: 0x%lx)\n",*(undefined8 *)(pcVar2 + 0x48),
                     *(undefined8 *)(pcVar2 + 0x38),*(undefined8 *)(pcVar2 + 0x40));
        }
      }
      else {
        _dl_printf("%s\n",*(undefined8 *)(pcVar2 + 0x48));
      }
    }
    pcVar2 = pcVar2 + 0x70;
  } while (pcVar2 != (char *)&_dl_random);
  return;
}

