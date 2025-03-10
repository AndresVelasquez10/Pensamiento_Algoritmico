
class Isotopo:
    def __init__(self, vida_media):
        self.vida_media = vida_media
    
    def clasificar(self):
        raise NotImplementedError("Este método debe ser implementado por una subclase")

class ClasificadorIsotopo(Isotopo):
    clasificacion = lambda self: (
        "Alta radiactividad" if self.vida_media <= 1 else
        "Radiactivo moderado" if self.vida_media <= 86400 else
        "Baja radiactividad"
    )
    
    def clasificar(self):
        return self.clasificacion()

# Entrada del usuario
T = float(input("Ingrese la vida media del isótopo en nanosegundos: ")) / 1e9  # Convertir de ns a segundos

# Clasificación y salida
isotopo = ClasificadorIsotopo(T)
print(isotopo.clasificar())

