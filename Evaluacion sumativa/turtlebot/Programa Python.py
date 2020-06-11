from flask import Flask, render_template
from serial import *
app = Flask(__name__)

@app.route('/')
def home():
    return render_template ('interfaz.html')
    rutina = movimiento
    return rutina
    
if __name__=='__main__':
    app.run(debug=True)
    rutinaT= rutina
    arduinoData.write('rutinaT')
    arduinoData = serial.Serial('com4',9600)