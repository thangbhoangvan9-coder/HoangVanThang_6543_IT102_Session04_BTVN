#include <stdio.h>

int main() {
    double chi_so_cu, chi_so_moi, so_dien, tien;

    printf("Nhap chi so cu (kWh): ");
    scanf("%lf", &chi_so_cu);

    printf("Nhap chi so moi (kWh): ");
    scanf("%lf", &chi_so_moi);

    so_dien = chi_so_moi - chi_so_cu;

    if (so_dien < 0) {
        printf("Loi: Chi so moi phai lon hon hoac bang chi so cu!\n");
        return 0;
    }

    if (so_dien <= 50)
        tien = so_dien * 10000;
    else if (so_dien <= 100)
        tien = 50 * 10000 + (so_dien - 50) * 15000;
    else if (so_dien <= 150)
        tien = 50 * 10000 + 50 * 15000 + (so_dien - 100) * 20000;
    else if (so_dien <= 200)
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien - 150) * 25000;
    else
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien - 200) * 30000;

    printf("So dien tieu thu: %.0lf kWh\n", so_dien);
    printf("So tien phai tra: %.0lf VND\n", tien);

    return 0;
}