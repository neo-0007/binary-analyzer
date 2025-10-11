
void UI_free(UI *ui)

{
  if (ui != (UI *)0x0) {
    if (((byte)ui[0x28] & 2) != 0) {
      (**(code **)(*(long *)ui + 0x38))(ui,*(undefined8 *)(ui + 0x10));
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(ui + 8),free_string);
    CRYPTO_free_ex_data(0xb,ui,(CRYPTO_EX_DATA *)(ui + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(ui + 0x30));
    CRYPTO_free(ui);
    return;
  }
  return;
}

