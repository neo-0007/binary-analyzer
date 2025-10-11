
/* std::Catalogs::~Catalogs() */

void __thiscall std::Catalogs::~Catalogs(Catalogs *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 0x30);
  puVar3 = *(undefined8 **)(this + 0x38);
  if (puVar2 != puVar3) {
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        free(*(void **)((long)pvVar1 + 8));
        locale::~locale((locale *)((long)pvVar1 + 0x10));
        operator_delete(pvVar1);
      }
      puVar2 = puVar2 + 1;
    } while (*(undefined8 **)(this + 0x38) != puVar2);
    puVar3 = *(undefined8 **)(this + 0x30);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar3);
  return;
}

